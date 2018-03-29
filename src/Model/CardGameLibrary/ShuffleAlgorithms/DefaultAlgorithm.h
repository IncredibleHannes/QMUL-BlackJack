/**
    <h1>DefaultAlgorithm</h1>
    <h3>DefaultAlgorithm.cpp</h3><br>
    An concrete implementation of a shuffle algorithm. This algorithm will be used
    as default algorithm in the deck shuffle methode if no other algorithm is
    specified. It uses the random function to swap two random position for
    100 times.

    @author Johannes Hartmann
    @version 1.0
*/


#ifndef DEFAULTALGORITHM_H_
#define DEFAULTALGORITHM_H_

#include "ShuffleAlgorithm.h"
#include <ctime>

class DefaultAlgorithm : public ShuffleAlgorithm {
public:
  DefaultAlgorithm() = default;
  /**
   * actual implementation of the shuffle algorithm as ddescribed in the class
   * discccription
   */
  virtual void shuffle(std::vector<std::unique_ptr<CardBase>> &cards);
private:
  int NUM_OF_ITERATION = 100;
};
#endif
