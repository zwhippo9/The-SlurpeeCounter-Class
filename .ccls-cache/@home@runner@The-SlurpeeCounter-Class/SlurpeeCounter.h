#ifndef SlurpeeCounter_h
#define SlurpeeCounter_h

class SlurpeeCounter {
private:
  int counter;

public:
  //initialize counter to 0
  SlurpeeCounter();

  //set to non negative value
  void setCounter(int value);

  //retrieve value
  int getCounter() const;

  //increment counter by 1
  void increment();

  //decrement counter by 1
  void decrement();

  //reset counter to 0
  void reset();

};

#endif
