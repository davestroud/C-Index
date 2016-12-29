// This program demonstrates the nested if statement.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	char employed,      // Currently employed, Y or N
			recentGrad;     // Recent grad, Y or N

	// Is the user employed and a recent graduate?
	cout << "Answer the following questions\n";
	cout << "with either Y for Yes or ";
	cout << "N for No.\n";
	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from college ";
	cout << "in the past two year? ";
	cin >> recentGrad;

	// Determine the user's loan qualifications.
	if (employed == 'Y' || 'y') {
		if (recentGrad == 'Y' || 'y')  // Nested if
				{
			cout << "You qualify for the special ";
			cout << "interest rate.\n";
		}
	}
	return 0;
}
