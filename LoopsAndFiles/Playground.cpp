#include <iostream>

int main(int argc, char const *argv[]) {
  int remainder = 1;
  int num;

  while (remainder == 1) {
    std::cout << "Enter a number" << '\n';
    std::cin >> num;
    remainder = num % 2;
  }

  return 0;
}
