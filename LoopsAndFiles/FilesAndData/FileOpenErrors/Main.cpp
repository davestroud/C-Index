// This program tests for file open errors.
#include <fstream>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::ifstream inputFile;
  int number;

  // Open the file.
  inputFile.open("BadListOfNumbers.txt");

  // If the file successfully opened, process it.
  if (inputFile) {
    // Read the numbers from the file and display them.
    while (inputFile >> number) {
      std::cout << number << '\n';
    }
    // Close the file.
    inputFile.close();

  } else {
    // Display the error message.
    std::cout << "Error opening the file." << '\n';
  }
  return 0;
}
