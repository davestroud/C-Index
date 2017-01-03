// This program assists a technician in the process
// of checking a substance's temperature
#include <iostream>

int main(int argc, char const *argv[]) {
	const double MAX_TEMP = 102.5;    // Maximum temperature
	double temperature;               // To hold the temperature

	// Get the current temperature
	std::cout << "Enter the substance's Celsius temperature: ";
	std::cin >> temperature;

	// As long as necessary, instruct the technician
	// to adjust the thermostat.
	while (temperature > MAX_TEMP) {
		std::cout << "The temperature is too high. Turn the" << '\n';
		std::cout << "thermostat down and wait 5 minutes." << '\n';
		std::cout << "Then take the Celcius temperature again" << '\n';
		std::cout << "and enter it here: ";
		std::cin >> temperature;
	}
	// Remind the technician to check the temperature
	// again in 15 minutes.
	std::cout << "The temperature is acceptable." << '\n';
	std::cout << "Check it again in 15 minutes." << '\n';

	return 0;
}
