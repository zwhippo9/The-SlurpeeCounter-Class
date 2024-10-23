#ifndef SLURPEECOUNTER_H
#define SLURPEECOUNTER_H

class SlurpeeCounter {
private:
  int counter;

public:
  //initialize counter to 0
  SlurpeeCounter();

  //set to non negative value
  void setCounter(int value);

  //retrieve value
  void getCounter() const;

  //increment counter by 1
  void incrementCounter();

  //decrement counter by 1
  void decrementCounter();

  //reset counter to 0
  void resetCounter();

};

#endif