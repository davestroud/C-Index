// The switch statement in this program tells the user somehthing
// he already knows: the data just entered!
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	char choice;

	cout << "Enter A, B, or C: ";
	cin >> choice;
	switch (choice) {
	case 'A':
		cout << "You entered A.\n";
		break;
	case 'B':
		cout << "You entered B.\n";
		break;
	case 'C':
		cout << "You entered C.\n";
		break;
	default:
		cout << "You did not enter A, B, or C!\n";
	}
	return 0;
}
