// This program demonstrates three ways
// to use cin.get() to pause a program.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	char ch;

	cout << "This program has paused. Press Enter to continue.";
	cin.get(ch);
	cout << "It has paused a second time. Press Enter again.";
	cin.get(ch);
	cout << "It has paused for a third time. Press Enter again.";
	cin.get(ch);
	cout << "Thank you!";
	return 0;
}
