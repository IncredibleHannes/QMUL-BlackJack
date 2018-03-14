#ifndef DEFAULTALGORITHM_H_
#define DEFAULTALGORITHM_H_

#include "ShuffleAlgorithm.h"

class DefaultAlgorithm : public ShuffleAlgorithm {
public:
  DefaultAlgorithm() = default;
  virtual void shuffle(std::vector<CardBase*> cards);
private:
  int NUM_OF_ITERATION = 100;
};
#endif
