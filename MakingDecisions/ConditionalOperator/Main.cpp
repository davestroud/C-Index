// This program calculates a consultant's charges at $50
// per hour, for a minumum of 5 hours.  The ?: operator
// adjusts hours to 5 if less than 5 hours were worked.
// The conditional operator is considered a ternary operator.
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) {
	const double PAY_RATE = 50.0;   // Hourly pay rate
	const int MIN_HOURS = 5;        // Minimum billable hours
	double hours,                   // Hours worked
			   charges;                  // Total charges

	// Get the hours worked.
	cout << "How many hours were worked? ";
	cin >> hours;

	// Determine the hours to charge for.
	hours = hours < MIN_HOURS ? MIN_HOURS : hours;
  // The conditional expression above performs the same operation
  // an if/else statement.

  // if (hours < MIN_HOURS)
  //    << MIN_HOURS;
  // else
  //    << hours

	// Calculate and display the charges
	charges = PAY_RATE * hours;
	cout << fixed << showpoint << setprecision(2)
      << "The charges are $" << charges << endl;
	return 0;
}

/*
Another example: p.201
cout << "Your grade is: " << (score < 60 ? "Fail." : "Pass.");

if (score < 60)
  cout << "Your grade is: Fail.";
else
  cout << "Your grade is: Pass.";

*/
