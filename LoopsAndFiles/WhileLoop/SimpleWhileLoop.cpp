// This program demonstrates a simple while loop.
// The while loop is a pretest loop.
#include <iostream>

int main(int argc, char const *argv[]) {
  int number = 0;   // loop control variable

  while (number < 5) {
    std::cout << "Hello" << '\n';
    number++;
  }
  std::cout << "That's all!" << '\n';
  return 0;
}
