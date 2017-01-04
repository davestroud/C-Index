// This program demonstrates a user controlled for loop.
#include <iostream>

int main(int argc, char const *argv[]) {
	int minNumber,    // Starting number to square
			maxNumber;    // Maximum number to squares

	// Get the minimum and maximum values to display.
	std::cout << "I will display a table of numbers and their squares.\n"
			<< "Enter the starting number: ";
	std::cin >> minNumber;
	std::cout << "Enter the ending number: ";
	std::cin >> maxNumber;

	// Display the table.
	std::cout << "Number Number Squared" << '\n' << "---------------------\n";

	for (int num = minNumber; num <= maxNumber; num++)
		std::cout << num << "\t\t" << (num * num) << '\n';

	return 0;
}
