// This program reads numbers from a file.
#include <fstream>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::ifstream inFile;
  int value1, value2, value3, sum;

  // Open the file.
  inFile.open("NumericData.txt");

  // Read the three numbers from the file.
  inFile >> value1;
  inFile >> value2;
  inFile >> value3;

  // Close the file
  inFile.close();

  // Calculate the sum of the numbers.
  sum = value1 + value2 + value3;

  // Display the three numbers.
  std::cout << "Here are the numbers:" << '\n'
            << value1 << " " << value2 << " " << value3 << std::endl;

  // Display the sum of the numbers.
  std::cout << "Their sum is: " << sum << '\n';

  return 0;
}
