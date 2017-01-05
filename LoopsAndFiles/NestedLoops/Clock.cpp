#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  cout << fixed << right;
  cout.fill('0'); // causes 0 to be printed in front of single digit numbers.
  for (int minutes = 0; minutes < 60; minutes++) {
    for (int seconds = 0; seconds < 60; seconds++) {
      cout << setw(2) << minutes << ":";
      cout << setw(2) << seconds << endl;
    }
  }
  return 0;
}
