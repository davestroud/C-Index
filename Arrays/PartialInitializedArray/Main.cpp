// This program has a partially intitialzed array.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  const int SIZE = 7;
  int numbers[SIZE] = {1, 2, 4, 8};   // Initialize first 4 elements

  cout << "Here are the contents of the array: \n";
  for (int index = 0; index < SIZE; index++)
      cout << numbers[index] << " ";
  return 0;
}
