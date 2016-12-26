// This program calculates the number of soccer teams
// that a youth league may create from the number of
// available players. Input validation is demonstrated
// with while loops.

#include <iostream>

int main(int argc, char const *argv[]) {

  // Constants for minimum and maximum players
  const int MIN_PLAYERS = 9,
            MAX_PLAYERS= 15;

  // Variables
  int players,        // Number of available players
      teamPlayers,    // Number of desired players per team
      numTeams,       // Number of teams
      leftOver;       // Number of players left over

  // Get the number of players per team
  std::cout << "How many players do you wish per team?" << '\n';
  std::cin >> teamPlayers;

  // Validate the input
  while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
  {
    // Explain the error
    std::cout << "You should have at least " << MIN_PLAYERS
              << " but know more than " << MAX_PLAYERS << " per team.\n";
              std::cin >> teamPlayers;
  }

  // Get the number of players available
  std::cout << "How many players are available?" << '\n';
  std::cin >> players;

  // Validate the input
  while (players <= 0)
  {
    // Get the input again
    std::cout << "Please enter 0 or greater" << '\n';
    std::cin >> players;
  }
  // Calculate the number of teams
  numTeams = players / teamPlayers;

  // Calculate the number of leftover players
  leftOver = players % teamPlayers;

  // Display the results
  std::cout << "There will be " << numTeams << " teams with "
      << leftOver << " players left over." << '\n';

  return 0;
}
