// This program demonstrates a simple while loop.
#include <iostream>

int main(int argc, char const *argv[]) {
  int number = 0;

  while (number < 5) {
    std::cout << "Hello" << '\n';
    number++;
  }
  std::cout << "That's all!" << '\n';
  return 0;
}
