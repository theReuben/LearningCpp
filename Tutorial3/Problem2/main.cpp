#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <numeric>
#include <vector>

std::vector<int> range(int start, int stop, int step);

int main(int argc, char const *argv[])
{
	/* Creates range function.*/
	std::vector<int> viTest = range(0, 10, 3);
	for(auto y : viTest) {
		std::cout << y << std::endl;
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