#ifndef SHUFFLEALGORITHM_H_
#define SHUFFLEALGORITHM_H_

#include <memory>
#include <vector>
#include <Card.h>

class ShuffleAlgorithm {
public:
  ShuffleAlgorithm() = default;
  virtual void shuffle(std::vector<CardBase*> &cards) = 0;
};
#endif
