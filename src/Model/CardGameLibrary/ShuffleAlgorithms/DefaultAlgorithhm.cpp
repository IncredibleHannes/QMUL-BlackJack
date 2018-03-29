#include "DefaultAlgorithm.h"

void DefaultAlgorithm::shuffle(std::vector<std::unique_ptr<CardBase>> &cards) {
  if (cards.size() <= 1) {
    return;
  }
  srand (time(NULL));
  for (int i = 0; i < NUM_OF_ITERATION; i++) {
    int j = ( std::rand() % ( cards.size() - 1 ) );
    cards.at(i % cards.size()).swap(cards.at(j));
  }
}
