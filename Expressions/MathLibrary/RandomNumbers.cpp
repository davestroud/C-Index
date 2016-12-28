// This program demonstrates random numbers.

#include <iostream>
#include <cstdlib>   // For rand and srand
#include <ctime>    // For the time function
using namespace std;

int main(int argc, char const *argv[]) {
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 1000;
	int y;

	// Limits the range of a random number.
	y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	// Get the system time.
	unsigned seed = time(0);

	// Seed the random number generator.
	srand(seed);

	// Display the three random numbers.
	cout << rand() << endl;
	cout << y << endl;
	return 0;
}
