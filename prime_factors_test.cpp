#include "gmock/gmock.h"
#include "prime_factors.cpp"

#include <vector>

using namespace std;

class PrimeFixture : public ::testing::Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3) {
	vector<int> expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, Of4) {
	vector<int> expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, Of6) {
	vector<int> expected = { 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, Of9) {
	vector<int> expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, Of12) {
	vector<int> expected = { 2, 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}