#include "SlurpeeCounter.h"
#include <iostream>
using namespace std;

// Constructor to initialize the counter to 0
SlurpeeCounter::SlurpeeCounter() {
    counter = 0;
}

// Function to set the counter to a specified value (non-negative)
void SlurpeeCounter::setCounter(int value) {
    if (value >= 0)
        counter = value;
    else
        cout << "Counter value cannot be negative." << endl;
}

// Function to retrieve the current value of the counter
int SlurpeeCounter::getCounter() const {
    return counter;
}

// Function to increment the counter by 1
void SlurpeeCounter::increment() {
    counter++;
}

// Function to decrement the counter by 1 (if it's non-negative)
void SlurpeeCounter::decrement() {
    if (counter > 0)
        counter--;
    else
        cout << "Counter value cannot be negative." << endl;
}

// Function to reset the counter to 0
void SlurpeeCounter::reset() {
    counter = 0;
}
