#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <numeric>

void divide(double num1, double num2);

int main(int argc, char const *argv[])
{
	int num1, num2;
	std::cout << "Enter numerator: ";
	std::cin >> num1;
	std::cout << "Enter denominator: ";
	std::cin >> num2;
	divide(num1, num2);
	return 0;
}

void divide(double num1, double num2) {

	try {
		if (num2 == 0) {
			throw "Divide by zero exception.";
		} else {
			printf("%.1f / %.1f = %.1f\n", num1, num2, (num1/num2));;
		}
	} catch(const char* exp) {
		std::cout << "Thrown: " << exp << "\n";
	}
}