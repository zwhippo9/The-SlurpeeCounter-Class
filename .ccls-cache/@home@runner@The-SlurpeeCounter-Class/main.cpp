#include "SlurpeeCounter.h"
#include <iostream>
using namespace std;

int main() {
    SlurpeeCounter myCounter;

  // 1. The value of a counterType object declared with the default constructor 
  SlurpeeCounter defaultCounter;
  cout << "Default counter value: " << defaultCounter.getCounter() << endl; 

  // 2.The value of a counterType object declared with a user-supplied parameter.
  SlurpeeCounter userCounter;
  userCounter.setCounter(5);
  cout << "User-defined counter value: " << userCounter.getCounter() << endl; // Should be 5

  // 3. Increment counter
  userCounter.increment();
  cout << "After increment: " << userCounter.getCounter() << endl; 

  // 4. Decrement counter
  userCounter.setCounter(5); 
  userCounter.decrement(); 
  cout << "After decrement: " << userCounter.getCounter() << endl;

  // 5. Reset the counter
  userCounter.reset();
  cout << "After reset: " << userCounter.getCounter() << endl; 

  // 6. Attempt to decrement after the reset
  userCounter.decrement();
  cout << "After attempting to decrement below zero: " << userCounter.getCounter() << endl; 

  // 7. Set the counter to a value of 10
  userCounter.setCounter(10);
  cout << "After setting counter to 10: " << userCounter.getCounter() << endl; 

return 0;
}