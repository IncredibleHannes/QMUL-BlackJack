#ifndef DECK_H_
#define DECK_H_

#include <memory>
#include <vector>
#include "DefaultAlgorithm.h"
#include "Card.h"

template <typename FACE, typename SUITE>
class Deck {
static_assert(std::is_base_of<CardProperty, FACE>::value, "FACE parameter not derived from Face");
static_assert(std::is_base_of<CardProperty, SUITE>::value, "SUITE parameter not derived from Suite");
private:
  std::vector<std::shared_ptr<CardBase>> cards;
public:
  Deck() {
    Card<FACE,SUITE> firstCard = Card<FACE,SUITE>();
    Card<FACE,SUITE> tmpCard = Card<FACE,SUITE>(firstCard);
    do {
      tmpCard.incFace();
      this->cards.push_back(std::make_shared<CardBase>(Card<FACE,SUITE>(tmpCard)));
    } while(firstCard != tmpCard);
  }

  void shuffle(std::shared_ptr<ShuffleAlgorithm> a = std::make_shared<DefaultAlgorithm>()) {
      a->shuffle(this->cards);
  };
};
#endif
