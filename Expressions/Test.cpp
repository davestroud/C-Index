#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {

  int num;
  double s;
  cout << "Enter a number: ";
  cin >> num;
  s = sqrt(num);
  cout << "The square root of " << num << " is " << s << endl;

	return 0;
}
