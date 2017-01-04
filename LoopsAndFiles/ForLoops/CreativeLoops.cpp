#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

	int x, y;

	for (x = 1, y = 1; x <= 5; x++) {
		std::cout << x << " plus " << y << " equals " << (x + y) << '\n';
	}

	std::cout << " " << '\n';   // to seperate line

	for (x = 1, y = 1; x <= 5; x++, y++) {
		std::cout << x << " plus " << y << " equals " << (x + y) << '\n';
	}

	return 0;
}

/*
 1 plus 1 equals 2
 2 plus 1 equals 3
 3 plus 1 equals 4
 4 plus 1 equals 5
 5 plus 1 equals 6

 1 plus 1 equals 2
 2 plus 2 equals 4
 3 plus 3 equals 6
 4 plus 4 equals 8
 5 plus 5 equals 10
 */
