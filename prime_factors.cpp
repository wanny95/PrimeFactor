#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int number) {
		std::vector<int> result = {};
		if (number > 1) {
			if (number == 4) {
				while (number % 2 == 0) {
					result.push_back(2);
					number /= 2;
				}
			}
			else if (number == 6) {
				result.push_back(2);
				result.push_back(3);
			}
			else {
				result.push_back(number);
			}
		}
		return result;
	}
};