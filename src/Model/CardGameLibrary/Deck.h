#ifndef DECK_H_
#define DECK_H_

#include <memory>
#include <vector>
#include "DefaultAlgorithm.h"
#include "Card.h"

class Deck {
private:
  typedef std::vector<std::shared_ptr<Card>> CardList;
  CardList cards;
public:
  Deck(Card& card);
  typedef CardList::iterator iterator;
  typedef CardList::const_iterator const_iterator;
  iterator begin() { return cards.begin(); };
  iterator end() { return cards.end(); };
  void shuffle(std::shared_ptr<ShuffleAlgorithm> a = std::make_shared<DefaultAlgorithm>());
};
#endif
