// This program demonstrates how characters can be
// compared with the relational operators.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	char ch;
	// Get the character from the user.
	cout << "Enter a digit or a letter: ";
	ch = cin.get();

	// Determine what the user entered.
	if (ch >= '0' && ch <= '9')
		cout << "You entered a digit.\n";
	else if (ch >= 'A' && ch <= 'Z')
		cout << "You entered an uppercase letter.\n";
	else if (ch >= 'a' && ch <= 'z')
		cout << "You enter a lowercase letter.\n";
	else
		cout << "That is not a digit or a letter.\n";

	return 0;
}
