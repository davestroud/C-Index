// This program demonstrates the setw manipulator being
// used with values of various data types.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	int intValue = 3928;
	double doubleValue = 91.5;
	string stringValue = "J.David Stroud";

	cout << "(" << setw(5) << intValue << ")" << endl;
	cout << "(" << setw(8) << doubleValue << ")" << endl;
	cout << "(" << setw(16) << stringValue << ")" << endl;
	return 0;
}
