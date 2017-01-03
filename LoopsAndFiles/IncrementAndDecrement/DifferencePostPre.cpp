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

  std::cout << '\n';

  // Example 1 using postfix
  int a = 2;
  int b = 5;
  int c = a * b++;
  std::cout << a << " " << b << " " << c << '\n';

  std::cout << " " << '\n';   // Displays a blank line

  // Example 2 using prefix
  int a2 = 2;
  int b2 = 5;
  int c2 = a2 * ++b2;
  std::cout << a2 << " " << b2 << " " << c2 << '\n';

	return 0;
}
