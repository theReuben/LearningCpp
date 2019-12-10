#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <numeric>
#include <vector>

int main(int argc, char const *argv[])
{
	/* Fills vector with [0,1] and prints evens.*/
	std::vector<int> viVec(10);
	std::iota(viVec.begin(), viVec.end(), 0);
	for (int i = 0; i < viVec.size(); ++i)
	{
		if ((viVec[i] % 2) == 0) {
			std::cout << viVec[i] << std::endl;
		}
	}
	return 0;
}