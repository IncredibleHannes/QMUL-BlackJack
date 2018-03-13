#include "DefaultAlgorithm.h"

void DefaultAlgorithm::shuffle(std::vector<std::shared_ptr<CardBase> > cards) {
  if (cards.size() <= 1) {
    return;
  }
  srand (time(NULL));
  for (int i = 0; i < NUM_OF_ITERATION; i++) {
    int j = ( std::rand() % ( cards.size() - 1 ) );
    std::shared_ptr<CardBase>  tmp = cards.at(i);
    cards.assign(i, cards.at(j));
    cards.assign(j, tmp);
  }
}
