#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int number) {
		std::vector<int> result = {};
		if (number > 1) {
			int divisor = 2;
			if (number == 4) {
				while (number % divisor == 0) {
					result.push_back(divisor);
					number /= divisor;
				}
			}
			else if (number == 4 || number == 6 || number == 9) {
				for (divisor = 2; number > 1; divisor++) {
					while (number % divisor == 0) {
						result.push_back(divisor);
						number /= divisor;
					}
				}
			}
			else {
				result.push_back(number);
			}
		}
		return result;
	}
};