#include "utils.cpp"
#include <iostream>
int Sum(int a, int b) {
	return a + b;
}
int Diff(int a, int b) {
	return a - b;
}
int Mult(int a, int b) {
	return a * b;
}
int main() {
	int a = 2;
	int b = 3;
	std::cout << Sum(a, b) << "\n";
	std::cout << Diff(a, b) << "\n";
	std::cout << Mult(a, b) << "\n";
}