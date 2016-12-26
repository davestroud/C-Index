#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  const int SIZE = 5;
  int values[SIZE];
  int count;

  for (count = 0; count < 5; count++)
      values[count] = count +1;

  for (count = 0; count < 5; count++)
      cout << values[count] << endl;;

  return 0;
}
