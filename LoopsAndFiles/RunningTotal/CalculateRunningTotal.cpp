// This program takes daily sales figures over a period of time
// and calculates their total.
#include <iomanip>
#include <iostream>

int main(int argc, char const *argv[]) {
  int days;           // Number of days
  double total = 0.0; // Accumulator, initialized with 0

  // Get the number of days.
  std::cout << "For how many days do you have sales figures? ";
  std::cin >> days;

  // Get the sales for each day and accumulate the total.
  for (int count = 1; count <= days; count++) {
    double sales;
    std::cout << "Enter the sales for day " << count << ": ";
    std::cin >> sales;
    total += sales; // Accumulate the running total.
  }

  // Display the total sales.
  std::cout << std::fixed << std::showpoint << std::setprecision(2);
  std::cout << "The total sales are $" << total << '\n';

  return 0;
}
