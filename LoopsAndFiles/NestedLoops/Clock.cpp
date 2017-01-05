#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  cout << fixed << right;
  cout.fill('0'); // causes 0 to be printed in front of single digit numbers.
  for (int hours = 0; hours < 24; hours++) {
    for (int minutes = 0; minutes < 60; minutes++) {
      for (int seconds = 0; seconds < 60; seconds++) {
        cout << setw(2) << hours << ":";
        cout << setw(2) << minutes << ":";
        cout << setw(2) << seconds << endl;
      }
    }
  }
  return 0;
}

/*
   23:59:49
   23:59:50
   23:59:51
   23:59:52
   23:59:53
   23:59:54
   23:59:55
   23:59:56
   23:59:57
   23:59:58
   23:59:59
 */
