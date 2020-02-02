#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <numeric>
#include <vector>
#include <ctime>

void bubbleSort(std::vector<int>& v);
void swap(std::vector<int>& v, int& i);

int main(int argc, char const *argv[]) {
	
	std::cout << "Bubble Sort: \n";
	std::vector<int> v{ 9,3,4,2,5,7,2,8 };
	for(auto elem : v) std::cout << elem << ", ";	
	std::cout << "\n";
	bubbleSort(v);
	return 0;
}

void bubbleSort(std::vector<int>& v) {
	clock_t time = clock();
	int i = v.size() - 1;
	while(i >= 1) {
		int j = 0;
		while(j < i) {
			if(v[j] >= v[j+1]) {
				swap(v, j);
			}
			j += 1;
		}
		i -= 1;
	}
	for(auto elem : v) std::cout << elem << ", ";
	std::cout << "\n";
	time = clock() - time;
	std::cout << "Runtime: " << (float)time/CLOCKS_PER_SEC << std::endl;
}

void swap(std::vector<int>& v, int& i) {
	int temp = v[i];
	v[i] = v[i+1];
	v[i+1] = temp;
}