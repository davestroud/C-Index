#include <iostream>
#include <cstdio>

int main() {

	int a, b;

	std::string represent[10] = {"zero", "one", "two", "three", "four", "five",
													"six", "seven", "eight", "nine"};

	std::cout << "Enter two numbers" << '\n';
	std::cin >> a >> b;

	for (int i = a; i <= b; i++) {
		if (i > 9) {
			if (i % 2 == 0)
				std::cout << "even" << '\n';
			else
				std::cout << "odd" << '\n';
		} else {
			std::cout << represent[i] << '\n';
		}
	}
	return 0;
}
