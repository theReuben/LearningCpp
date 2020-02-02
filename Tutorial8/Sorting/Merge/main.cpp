#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <numeric>
#include <vector>
#include <ctime>
#include <stddef.h>

void mergeSort(std::vector<int>& v);
std::vector<int> MergeArrays(std::vector<int>& v1, std::vector<int>& v2);

int main(int argc, char const *argv[]) {

	std::cout << "Merge Sort: \n";
	std::vector<int> v{ 9,3,4,2,5,7,2,8 };
	for(auto elem : v) std::cout << elem << ", ";	
	std::cout << "\n";
	mergeSort(v);
	return 0;
}

void mergeSort(std::vector<int>& v) {
	clock_t time = clock();
	std::vector<std::vector<int>> v3;
	for (size_t i = 0; i < v.size(); i++) {
		std::vector<int> vec {v[i]};
		v3.push_back(vec);
	}
	while(v3.size() > 1) {
		std::vector<int> v1 {v3[0]};
		std::vector<int> v2 {v3[1]};
		v3.erase(v3.begin(), v3.begin() + 2);
		v3.push_back(MergeArrays(v1, v2));
	}
	v = (std::vector<int>) v[0];
	time = clock() - time;
	std::cout << "Runtime: " << (float)time/CLOCKS_PER_SEC << std::endl;
}

// Currently returns new array, would like to convert it so inplace merge
std::vector<int> MergeArrays(std::vector<int>& v1, std::vector<int>& v2) {
	std::vector<int> v3;
	int v1_i = 0;
	int v2_i = 0;
	while(v1_i < v1.size() && v2_i < v2.size()) {
		if (v1[v1_i] <= v2[v2_i]) {
			v3.push_back(v1[v1_i]);
			v1_i += 1;
		} else {
			v3.push_back(v2[v2_i]);
			v2_i += 1;
		}
	}
	if(v1_i < v1.size()) {
		while (v1_i < v1.size()) v3.push_back(v1[v1_i++]);
	} else if (v2_i < v2.size()) {
		while (v2_i < v2.size()) v3.push_back(v2[v2_i++]);
	}	
	return v3;
}