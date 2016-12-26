// This program demonstrates the range-based for loop.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	string planets[] = { "Mercury", "Venus", "Mars", "Jupiter", "Saturn",
			"Uranus", "Neptune", "Pluto" };

	cout << "Here are the planets:\n";

	// Display the planets
	for (auto val : planets)
		cout << val << endl;

	return 0;
}
