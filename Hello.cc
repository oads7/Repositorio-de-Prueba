#include <iostream>

int add (const int& a, const int& b) {
	return a+b;
}

int main () {
	std::cout << "Hello, World\n";
	std::cout << "Sumar 1+2 = " << add (1,2) << "\n";
	
	return 0;
}

