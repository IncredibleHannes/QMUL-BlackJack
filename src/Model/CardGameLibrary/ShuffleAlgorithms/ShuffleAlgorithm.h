/**
    <h1>ShuffleAlgorithm</h1>
    <h3>ShuffleAlgorithm.cpp</h3><br>
    This class is representing an interface for a shuffle algorithm.
    For making your own shuffle algorithm, override the abstract
    shuffle methode and shuffle the vector reverence

    @author Johannes Hartmann
    @version 1.0
*/

#ifndef SHUFFLEALGORITHM_H_
#define SHUFFLEALGORITHM_H_

#include <memory>
#include <vector>
#include <Card.h>

class ShuffleAlgorithm {
public:
  ShuffleAlgorithm() = default;
  /**
   * override to implement the own shuffle algorithm
   * @param cards the vector with cards to shuffle
   */
  virtual void shuffle(std::vector<std::unique_ptr<CardBase>> &cards) = 0;
};
#endif
