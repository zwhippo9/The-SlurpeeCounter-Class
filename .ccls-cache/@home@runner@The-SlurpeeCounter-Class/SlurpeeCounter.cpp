#include "SlurpeeCounter.h"
#include <iostream>
using namespace std;

// Constructor to initialize the counter to 0
SlurpeeCounter::SlurpeeCounter() {
    counter = 0;
}

//set to specidified nonnegative value
void SlurpeeCounter::setCounter(int value){
    if (value >= 0)
        counter = value;
    else
        cout << "Counter value cannot be negative." << endl;
}

//retrieve current value of counter
int SlurpeeCounter::getCounter() const {
    return counter;
}

//increment counter by 1
void SlurpeeCounter::increment() {
    counter++;
}

//decrement counter by 1 
void SlurpeeCounter::decrement() {
  if (counter > 0)
      counter--;
  else
      cout << "Counter value cannot be negative." << endl;
}

//reset counter
void SlurpeeCounter::reset() {
    counter = 0;
}
  