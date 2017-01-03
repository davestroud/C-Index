// This program averages 3 test scores. It repeats as
// many times as the user wishes.
// This is a user-controlled loop.
// The do-while loop is a posttest loop.
#include <iostream>

int main(int argc, char const *argv[]) {
	int score1, score2, score3;   // Three scores
	double average;               // Average score
	char again;                   // To hold Y or N input

	do {
		// Get the three scores
		std::cout << "Enter 3 scores and I will average them: ";
		std::cin >> score1 >> score2 >> score3;

		// Calculate and display the average.
		average = (score1 + score2 + score3) / 3.0;
		std::cout << "The average is " << average << '\n';

		// Does the user want to average another set?
		std::cout << "Do you want to average another set? (Y/N) ";
		std::cin >> again;
	} while (again == 'Y' || again == 'y');

	return 0;
}
