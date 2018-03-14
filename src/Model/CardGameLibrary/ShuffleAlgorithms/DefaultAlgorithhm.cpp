#include "DefaultAlgorithm.h"

void DefaultAlgorithm::shuffle(std::vector<CardBase*> &cards) {
  if (cards.size() <= 1) {
    return;
  }
  srand (time(NULL));
  for (int i = 0; i < NUM_OF_ITERATION; i++) {
    int j = ( std::rand() % ( cards.size() - 1 ) );
    CardBase*  tmp = cards.at(i % cards.size());
    cards.at(i % cards.size())= cards.at(j);
    cards.at(j) = tmp;
  }
}
