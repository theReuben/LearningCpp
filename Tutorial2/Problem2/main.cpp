#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
	/*Calculator which takes command line calculation e.g. 5 + 2*/
	std::string sInput;
	std::string sTemp;
	std::vector<std::string> vsInput;
	const char cSpace = ' ';
	double dVal1;
	double dVal2;
	double dResult;
	std::string cOperator;

	std::cout << "Enter calculation : ";
	getline(std::cin, sInput);
	std::stringstream ss(sInput);
	while(getline(ss, sTemp, cSpace)) {
		vsInput.push_back(sTemp);
	}

	dVal1 = std::stod(vsInput[0]);
	dVal2 = std::stod(vsInput[2]);
	cOperator = vsInput[1][0];
	if ((cOperator != "+") 
		&& (cOperator != "-") 
		&& (cOperator != "*") 
		&& (cOperator != "/")) {
		printf("Format does not match accepted format (e.g. 5 + 2).\n");
	} else if (cOperator == "+") {
		dResult = dVal1 + dVal2;
		printf("%.1f + %.1f = %.1f\n", dVal1, dVal2, dResult);
	} else if (cOperator == "-") {
		dResult = dVal1 - dVal2;
		printf("%.1f - %.1f = %.1f\n", dVal1, dVal2, dResult);
	} else if (cOperator == "*") {
		dResult = dVal1 * dVal2;
		printf("%.1f * %.1f = %.1f\n", dVal1, dVal2, dResult);
	} else if (cOperator == "/") {
		dResult = dVal1 / dVal2;
		printf("%.1f / %.1f = %.1f\n", dVal1, dVal2, dResult);
	} 
		
	

	return 0;
}