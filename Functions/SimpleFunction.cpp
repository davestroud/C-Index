// This program has two functions: main and displayMessage
#include <iostream>

//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage() {
  std::cout << "Hello from the fuction displayMessage" << '\n';
}

// ****************************************
// Function main                          *
//*****************************************

int main(int argc, char const *argv[]) {
  std::cout << "Hello from main." << '\n';
  displayMessage();
  std::cout << "Back in function main again." << '\n';
  return 0;
}
