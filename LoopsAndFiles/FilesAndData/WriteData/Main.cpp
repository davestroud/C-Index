// This program writes data to a file.
#include <fstream>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::ofstream outputFile;
  outputFile.open("demofile.txt");

  std::cout << "Now writting data to the file" << '\n';

  // Write four names to the file.
  outputFile << "Bach\n";
  outputFile << "Beethoven\n";
  outputFile << "Mozart\n";
  outputFile << "Schubert\n";

  // Close the file
  outputFile.close();
  std::cout << "Done" << '\n';
  return 0;
}
