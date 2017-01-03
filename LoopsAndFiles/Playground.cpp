#include <iostream>

int main(int argc, char const *argv[]) {

  int x = 99;
  if (++x < 100)
    std::cout << "It is true!" << '\n';
  else
    std::cout << "It is false" << '\n';

  return 0;
}
