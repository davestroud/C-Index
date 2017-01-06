// This program reads data from a file.
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::ifstream inputFile;
  std::string name;

  inputFile.open("Friends.txt");
  std::cout << "Reading data from the file." << '\n';

  inputFile >> name;         // Read name 1 from the file
  std::cout << name << '\n'; // Display name 1

  inputFile >> name;         // Read name 2 from the file
  std::cout << name << '\n'; // Read name 2

  inputFile >> name;         // Read name 3 from the file
  std::cout << name << '\n'; // Display name 3

  inputFile.close(); // Close the file
  return 0;
}
