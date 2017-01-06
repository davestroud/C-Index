// This program write user input to a file.
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::ofstream outputFile;
  std::string name1, name2, name3;

  // Open an output file.
  outputFile.open("Friends.txt");

  // Get the names of three friends.
  std::cout << "Enter the names of three friends." << '\n';
  std::cout << "Friend #1: ";
  std::cin >> name1;
  std::cout << "Friend #2: ";
  std::cin >> name2;
  std::cout << "Friend #3: ";
  std::cin >> name3;

  // Write the name to the file.
  outputFile << name1 << std::endl;
  outputFile << name2 << std::endl;
  outputFile << name3 << std::endl;
  std::cout << "The names were saved to a file." << '\n';

  // Close the file.
  outputFile.close();
  return 0;
}
