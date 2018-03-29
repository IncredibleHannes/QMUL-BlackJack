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
  unsigned int handSize;
  CardList hand;

public:

  /**
   * standard constructor
   * @param size the maximum number a hand can have
   */
  Hand(int size) : handSize(size) {};

  /**
   * adds cards until the hand limit is reached
   * @param  c the card to add to the hand
   * @return   true if the card was added succesfully
   */
  bool addCard(Card<FACE, SUITE> c) {
    if (hand.size() < this->handSize) {
      this->hand.push_back(c);
      return true;
    } else {
      return false;
    }
  };

  /**
   * @return the number of cards that are currenty in the hand
   */
  int getSize() const {
    return hand.size();
  };

  /**
   * removes all cards of a hand
   */
  void clearHand() {
    this->hand = CardList();
  }

  /**
   * returns the value of the hand. Can be overwritten in a subclass to work switch
   * every game. This implementation sums up the value of all face values in the hand
   * @return [description]
   */
  virtual int getValue() {
    int i = 0;
    for (Card<FACE, SUITE> c : hand) {
      i += c.getFace().getValue();
    }
    return i;
  }

  /*
   * Making the hand class interable
   */
  typedef typename CardList::iterator iterator;
  typedef typename CardList::const_iterator const_iterator;
  iterator begin() { return hand.begin(); };
  iterator end() { return hand.end(); };

};
#endif
