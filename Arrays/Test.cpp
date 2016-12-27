#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int myArray[]= {1,2,3,4,5};

  int total = 0;  // Initialize accumulator
  for (int count = 0; count < 5; count++) {
    total += myArray[count];
  }

  cout << total << endl;



  return 0;
}
