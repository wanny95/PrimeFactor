#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int number) {
		std::vector<int> result = {};
		if (number > 1) {
			result.push_back(number);
		}
		return result;
	}
};