#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include "DefaultAlgorithm.h"
#include "Card.h"

template <typename FACE, typename SUITE>
class Deck {
static_assert(std::is_base_of<CardProperty, FACE>::value, "FACE parameter not derived from Face");
static_assert(std::is_base_of<CardProperty, SUITE>::value, "SUITE parameter not derived from Suite");
private:
  std::vector<CardBase*> cards;
public:

  Deck() {
    this->setupDeck();
  }

  ~Deck() {cards.clear();};

  virtual void setupDeck() {
    Card<FACE,SUITE> firstCard = Card<FACE,SUITE>();
    Card<FACE,SUITE> tmpCard = Card<FACE,SUITE>(firstCard);
    do {
      Card<FACE,SUITE> tmpCard2 = Card<FACE,SUITE>(tmpCard);
      do {
        tmpCard.incFace();
        this->cards.push_back(static_cast<CardBase*>(new Card<FACE,SUITE>(tmpCard)));
      } while(tmpCard != tmpCard2);
      tmpCard.incSuite();
    } while(firstCard != tmpCard);
  }

  void clear()  {
    this->cards.clear();
    this->setupDeck();
  }

  void shuffle(std::shared_ptr<ShuffleAlgorithm> a = std::make_shared<DefaultAlgorithm>()) {
      a->shuffle(this->cards);
  };

  std::vector<CardBase*> getCards() { return this->cards; };

  Card<FACE,SUITE> getTop() {
    return *static_cast<Card<FACE, SUITE>*>(cards.at(cards.size()-1));
  };

  void popTop() {
    delete cards.at(cards.size()-1);
    cards.pop_back();
  }

  bool isEmpty() {
    return cards.empty();
  }

};
#endif
