#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char const *argv[])
{
	/* Program takes a number of miles as input and converts to km. */
	std::string sMiles;
	double dMiles;
	double dKm;
	const double ratio = 1.60934;

	std::cout << "Enter miles : ";
	getline(std::cin, sMiles);
	dMiles = std::stod(sMiles);
	dKm = dMiles * ratio;
	printf("%.1f miles is %.4f km.\n", dMiles, dKm);
	return 0;
}