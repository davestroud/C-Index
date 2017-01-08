// This program reads data from a file.
#include <fstream>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::ifstream inputFile;
  int number;

  // Open the file.
  inputFile.open("ListOfNumbers.txt");

  // Read the numbers from the file and display them.
  while (inputFile >> number) {
    std::cout << number << '\n';
  }
  // Close the file.
  inputFile.close();

  return 0;
}
