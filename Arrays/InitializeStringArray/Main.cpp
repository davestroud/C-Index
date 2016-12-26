// This program initializes a string array.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  const int SIZE = 9;
  string planets[SIZE] = { "Mercury", "Venus", "Earth", "Mars",
                          "Jupiter", "Saturn", "Uranus",
                          "Neptune", "Pluto"};

  cout << "Here are the planets:\n";

  for (int count = 0; count < SIZE; count++)
      cout << planets[count] << endl;
  return 0;
}
