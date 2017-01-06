// This program writes user input to a file.
#include <fstream>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::ofstream outputFile;
  int number1, number2, number3;

  // Open an output file.
  outputFile.open("Numbers.txt");

  // Get three numbers from the user.
  std::cout << "Enter a number: ";
  std::cin >> number1;
  std::cout << "Enter another number: ";
  std::cin >> number2;
  std::cout << "Enter another number: ";
  std::cin >> number3;

  // Write the numbers to the file.
  outputFile << number1 << std::endl;
  outputFile << number2 << std::endl;
  outputFile << number3 << std::endl;
  std::cout << "The numbers were saved to a file." << '\n';

  // Close the file
  outputFile.close();
  std::cout << "Done" << '\n';
  return 0;
}
