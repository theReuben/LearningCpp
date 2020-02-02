#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <numeric>
#include <vector>
#include <ctime>
#include <stddef.h>

template<typename T> void merge_sort(T& v);
template<typename T> void merge(T& left, T& right, T& v);

int main(int argc, char const *argv[]) {

	std::cout << "Merge Sort: \n";
	std::vector<int> v{ 9,3,4,2,5,7,2,8 };
	for(auto elem : v) std::cout << elem << ", ";	
	std::cout << "\n";
	merge_sort(v);
	return 0;
}

template<typename T> 
void merge_sort(T& v) {
	clock_t time = clock();
	if (v.size() <= 1) {
		return;
	}
	int mid = (v.size() + 1)/2;
	T left;
	T right;
	std::copy(v.begin(), v.begin()+mid, std::back_inserter(left));
	std::copy(v.begin()+mid, v.end(), std::back_inserter(right));

	merge_sort(left);
	merge_sort(right);
	merge(left, right, v);
	for(auto elem : v) std::cout << elem << ", ";
	std::cout << "\n";
	time = clock() - time;
	std::cout << "Runtime: " << (float)time/CLOCKS_PER_SEC << std::endl;
}

template<typename T> 
void merge(T& left, T& right, T& v) {
	size_t nL = 0;
	size_t nR = 0;
	size_t n = 0;

	while (nL < left.size() && nR < right.size()) {
		v[n++] = (left[nL] <= right[nR]) ? left[nL++] : right[nR++];
	}

	while (nL < left.size()) {
		v[n++] = left[nL++];
	}
	while (nR < right.size()) {
		v[n++] = right[nR++];
	}
}