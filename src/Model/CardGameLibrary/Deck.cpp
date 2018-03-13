#include "Deck.h"

Deck::Deck(Card& card) {
  Card firstCard = Card(card);
  Card tmpCard = Card(card);

  while(tmpCard != firstCard) {
    while(tmpCard != card)  {
      this->cards.push_back(std::make_shared<Card>(Card(card)));
      card.incFace();
    }
    card.incSuite();
    tmpCard = Card(card);
  }


}

void Deck::shuffle(std::shared_ptr<ShuffleAlgorithm> a) {
  a->shuffle(this->cards);
}
