/**
    <h1>Suite</h1>
    <h3>Face.cpp</h3><br>
    This class is representing the Suite of a card


    @author Johannes Hartmann
    @version 1.0
*/

#ifndef SUITE_H_
#define SUITE_H_

class Suite {
public:
  virtual Suite& operator++();
  virtual Suite operator++(int);
  virtual bool operator==(const Suite& toCompare) const;
};
#endif
