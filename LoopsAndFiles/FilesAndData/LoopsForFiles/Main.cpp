// This program reads data from a file.
#include <fstream>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::ofstream outputFile; // File stream object
  int numberOfDays;         // Number of days of sales
  double sales;             // Sales amount for a days

  // Get the number of days.
  std::cout << "For how many days do you have sales? " << '\n';
  std::cin >> numberOfDays;

  // Open a file named Sales.txt
  outputFile.open("Sales.txt");

  // Get the sales for each day and write it to the file
  for (int count = 1; count <= numberOfDays; count++) {
    // Get the sales for a day
    std::cout << "Enter the sales for day " << count << ": ";
    std::cin >> sales;

    // Write the sales to the file.
    outputFile << sales << std::endl;
  }

  // Close the file
  outputFile.close();
  std::cout << "Data written to Sales.txt" << '\n';

  return 0;
}
