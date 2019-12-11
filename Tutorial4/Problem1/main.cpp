#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <numeric>
#include <vector>

std::vector<int> range(int start, int stop, int step);

int main(int argc, char const *argv[])
{
	/* Draws trees of given height out of #. 
		e.g. 5
		    #
		   ###
		  #####
		 #######
		 	#
	.*/
	int nHeight;
	int nHashes = 1;
	std::cout << "How big a tree : ";
	std::cin >> nHeight;
	int nHeightStore = nHeight;	
	int nSpaces = nHeight - 1;

	while(nHeight > 0) {
		for(auto x: range(1, nSpaces, 1)) std::cout << " ";
		for(auto x: range(1, nHashes, 1)) std::cout << "#";
		std::cout << std::endl;
		nHeight--;
		nSpaces--;
		nHashes += 2;
	}
	for(auto x: range(1, nHeightStore-1, 1)) std::cout << " ";
	std::cout << "#" << std::endl;
	
	return 0;
}

std::vector<int> range(int start, int stop, int step) {
	std::vector<int> viRange(((stop-start)/step)+1);
	for (int i = 0; i < viRange.size(); ++i) {
		viRange[i] = start + (i * step);
	}
	return viRange;
}