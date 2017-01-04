// This program displays the numbers 1 through 10 and
// their squares.
// The for loop is a count controlled loop
// The for loop is a Pretest loop.
#include <iostream>

int main(int argc, char const *argv[]) {
	const int MIN_NUMBER = 1, MAX_NUMBER = 10;

	int num;

	std::cout << "Number Number Squared" << '\n';
	std::cout << "---------------------" << '\n';

	for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
		std::cout << num << "\t\t" << (num * num) << std::endl;


	std::cout << " " << '\n';		// line break

	// Loop displays all even number 2 through 40
	for (num = 2; num <= 40; num += 2)
		std::cout << num << ' ';

	std::cout << " " << '\n';		// line break
	std::cout << " " << '\n';		// line break

	// Loop that counts backward from 10 to 0.
	for (num = 10; num >= 0; num--)
		std::cout << num << ' ';

	return 0;
}


// You should use the for loop instead of the while or do-while
// loop in any situation that clearly requires an initialization,
// uses false a false condition to stop the loop, and requires an
// update to occur at the end of each loop iteration.
