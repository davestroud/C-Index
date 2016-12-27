#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

	int numbers[] = { 10, 20, 30, 40, 50 };

	int total = 0;  // Initialize accumulator
	for (int count = 0; count < 5; count++) {
		total += numbers[count];
	}

	cout << total << endl;

	return 0;
}
