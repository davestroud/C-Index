// This program displays a list of numbers and
//their squares.
#include <iostream>

int main(int argc, char const *argv[]) {
	const int MIN_NUMBER = 1,     // Starting number to square
			MAX_NUMBER = 10;    // Max number to square

	int num = MIN_NUMBER;         // Counter

	std::cout << "Number Number Squared" << '\n';
	std::cout << "---------------------" << '\n';

	while (num <= MAX_NUMBER) {
		std::cout << num << "\t\t" << (num * num) << '\n';
		num++;  // Increment the counter.
	}
	return 0;
}
