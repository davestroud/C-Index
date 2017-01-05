// A sentinel is a special value that marks the end of a list of values.
// This program calculates the totalnumber of points a
// soccer team has earned over a series of games.  The user
// enters a series of point values, then -1 when finished.
#include <iostream>

int main(int argc, char const *argv[]) {
  int game = 1,  // Game counter
      points,    // To hold a number of points
      total = 0; // Accumulator

  std::cout << "Enter the number of points your team has earned" << '\n';
  std::cout << "so far in the season, then enter -1 when finished.\n\n";
  std::cout << "Enter the points for game " << game << ": ";
  std::cin >> points;

  while (points != -1) {
    total += points;
    game++;
    std::cout << "Enter the points for game " << game << ": ";
    std::cin >> points;
  }
  std::cout << "\nThe total points are " << total << '\n';

  return 0;
}
