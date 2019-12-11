#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <numeric>
#include <vector>

std::vector<int> range(int start, int stop, int step);

int main(int argc, char const *argv[])
{
	/* Computes compound interest using the previously made range function.*/
	double dInvesting;
	double dInterest;
	int iNumYears;
	std::cout << "How much to put in /£ : ";
	std::cin >> dInvesting;
	std::cout << "How much interest /% : ";
	std::cin >> dInterest;
	dInterest /= 100;
	dInterest += 1;
	std::cout << "How many years : ";
	std::cin >> iNumYears;
	for (int y : range(1, iNumYears, 1)) {
		dInvesting *= dInterest;
		printf("Year %d Amount £%.2f\n", y, dInvesting);
	}
	return 0;
}

std::vector<int> range(int start, int stop, int step) {
	std::vector<int> viRange(((stop-start)/step)+1);
	for (int i = 0; i < viRange.size(); ++i) {
		viRange[i] = start + (i * step);
	}
	return viRange;
}