#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include "Card.h"

template <typename FACE, typename SUITE>
class Hand {
static_assert(std::is_base_of<CardProperty, FACE>::value, "FACE parameter not derived from Face");
static_assert(std::is_base_of<CardProperty, SUITE>::value, "SUITE parameter not derived from Suite");

private:
  typedef std::vector<Card<FACE, SUITE>> CardList;
  int handSize;
  CardList hand;

public:
  Hand(int size) : handSize(size) {};
  bool addCard(Card<FACE, SUITE> c) {
    if (hand.size() < this->size) {
      this->hand.push_back(c);
      return true;
    } else {
      return false;
    }
  };

  int getSize() {
    return hand.size();
  };

  typedef typename CardList::iterator iterator;
  typedef typename CardList::const_iterator const_iterator;
  iterator begin() { return hand.begin(); };
  iterator end() { return hand.end(); };

};
#endif
