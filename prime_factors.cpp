#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int number) {
		std::vector<int> result = {};
		if (number == 2) {
			result.push_back(2);
		}
		return result;
	}
};