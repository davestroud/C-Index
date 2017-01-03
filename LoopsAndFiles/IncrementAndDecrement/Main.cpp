// This program demonstrates the ++ and -- operators.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int num = 4;  // num starts with 4.

	// Display the value in num.
	cout << "The variable num is " << num << endl;
	cout << "I will now increment num.\n\n";

	// Use postfix ++ to increment num.
	num++;
	cout << "Now the variable num is " << num << endl;
	cout << "I will increment num again.\n\n";

	// Use prefix ++ to increment num.
	++num;
	cout << "Now the variable num is " << num << endl;
	cout << "I will now decrement num.\n\n";

	// Use postfit -- to decrement num.
	num--;
	cout << "Now the variable num is " << num << endl;
	cout << "I will decrement num again.\n\n";

	// Use prefix -- to decrement num.
	--num;
	cout << "Now the variable num is " << num << endl;
	return 0;
}
