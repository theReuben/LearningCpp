#include "cstdlib"
#include "iostream"
#include "vector"

template<typename T> 
double area(T height, T width);

template<typename T> 
double area(T radius);;

template<typename S, typename T> 
double area(S height, T width);

int main(int argc, char const *argv[])
{
	double rectangle = area(3, 4.0);
	std::vector<int> v {5};
	double circle = area(5);
	std::cout << "Area of rectangle (3x4.0): " << rectangle << "\n";
	std::cout << "Area of circle, radius 5: " << circle << "\n";
	return 0;
}

template<typename T> 
double area(T height, T width) {
	return height * width;
}

template<typename S, typename T> 
double area(S height, T width) {
	return height * width;
}

template<typename T> 
double area(T radius) {
	try {
		return 3.1415928 * radius;
	} catch(const std::bad_typeid& e) {
		std::cout << "Thrown: " << e.what() << "\n";
	}
}
