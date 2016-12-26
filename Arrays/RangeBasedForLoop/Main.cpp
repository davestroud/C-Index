// This program demonstrates the range-based for loop.
// Compile C++11 with -std=c++11

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	// Define an array of integers.
	int numbers[] = { 10, 20, 30, 40, 50 };

	// Display the values in the array.
	for (int val : numbers) {
		cout << "The next value is ";
		cout << val << endl;
	}
	return 0;
}
