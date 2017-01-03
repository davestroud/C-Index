#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int number;
  cout << "Enter an integer value\n";
  cin >> number;

  stringstream sso;
  sso << number;
  string strnumber;
  sso >> strnumber;

  cout << "The integer number is " << number << endl;
  cout << "The string form of number is " << strnumber << endl;

  return 0;
}
