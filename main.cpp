#include <iostream>
#include <string>
using namespace std;

// The integer appleQuantity is assigned the value 10
int appleQuantity = 10;

// This segments calls function appleEval
void appleEval(int appleQuantity);

// This part defines function appleEval
void appleEval(int appleQuantity) {
  if (appleQuantity == 10) {
    cout << "You have 10 apples.";
  } else {
    cout << "You do not have 10 apples.";
  }
}

// The main function calls the function appleEval and executes the operation
int main() {
  appleEval(appleQuantity);
  return 0;
}
