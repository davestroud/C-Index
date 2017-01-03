// This program demonstrates the prefix and postfix
// modes of the increment and decrement operators.
#include <iostream>

int main(int argc, char const *argv[]) {
	int num = 4;

	std::cout << num << '\n';       // Displays 4
	std::cout << num++ << '\n';     // Displays 4, then add 1 to num.
	std::cout << num << '\n';       // Displays 5
	std::cout << ++num << '\n';     // Adds 1 to num, then displays 6.
	std::cout << '\n';              // Displays a blank line
	std::cout << num << '\n';       // Displays 6
	std::cout << num-- << '\n';     // Displays 6, then subtracts 1 from num
	std::cout << num << '\n';       // Displays 5
	std::cout << --num << '\n';     // Subtracts 1 from num, then displays 4

	return 0;
}
