#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char const *argv[])
{
	/* Takes an age as input and outputs what education level they should be in.*/
	std::string sAge;
	int iAge;
	std::cout << "Enter age : ";
	getline(std::cin, sAge);
	iAge = std::stoi(sAge);
	if (iAge < 5) {
		printf("Too young for school.\n");
	} else if (iAge == 5) {
		printf("Go to kindergarten.\n");
	} else if (iAge >= 6 && iAge <= 17) {
		printf("Go to grade %d\n", iAge-5);
	} else {
		printf("Go to college.\n");
	}
	return 0;
}