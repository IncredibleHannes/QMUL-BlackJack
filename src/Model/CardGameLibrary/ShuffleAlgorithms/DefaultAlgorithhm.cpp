#include "DefaultAlgorithm.h"

void DefaultAlgorithm::shuffle(std::vector<std::shared_ptr<Card> > cards) {
  if (cards.size() == 0) {
    return;
  }
  srand (time(NULL));
  for (int i = 0; i < NUM_OF_ITERATION; i++) {
    int j = ( std::rand() % ( cards.size() + 1 ) );
    std::shared_ptr<Card>  tmp = cards.at(i);
    cards.assign(i, cards.at(j));
    cards.assign(j, tmp);
  }
}
