// This program averages test scores. It asks the user for the
// number of students and the number of test scores per student.
#include <iomanip>
#include <iostream>

int main(int argc, char const *argv[]) {
  int numStudents, // Number of students
      numTests;    // Number of tests per students
  double total,    // Accumulator for total scores
      average;     // Average test score

  // Set the numeric output formatting.
  std::cout << std::fixed << std::showpoint << std::setprecision(1);

  // Get the number of students.
  std::cout << "This program averages test scores" << '\n';
  std::cout << "For how many students do you have scores? ";
  std::cin >> numStudents;

  // Get the number of test scores per student.
  std::cout << "How many test scores does each student have? ";
  std::cin >> numTests;

  // Determine each student's average score.
  for (int student = 1; student <= numTests; student++) {
    total = 0; // Initialize the accumulator.
    for (int test = 1; test <= numTests; test++) {
      double score;
      std::cout << "Enter score " << test << " for ";
      std::cout << "student " << student << ": ";
      std::cin >> score;
      total += score;
    }
    average = total / numTests;
    std::cout << "The average score for student " << student;
    std::cout << " is " << average << ".\n\n";
  }

  return 0;
}
