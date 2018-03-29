/**
    <h1>Deck</h1>
    <h3>Deck.cpp</h3><br>
    This class is representing a card deck. It is parameterised by thwo template
    parameters. This are specifing what type of card is used for the Deck
    The setup methode of this class may be overwritten to achive different deck
    setup behavour.


    @author Johannes Hartmann
    @version 1.0
*/

#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <memory>
#include "DefaultAlgorithm.h"
#include "Card.h"

template <typename FACE, typename SUITE>
class Deck {
static_assert(std::is_base_of<CardProperty, FACE>::value, "FACE parameter not derived from Face");
static_assert(std::is_base_of<CardProperty, SUITE>::value, "SUITE parameter not derived from Suite");
private:
  std::vector<std::unique_ptr<CardBase>> cards;
public:

  /**
   * The constructor calls the setupDeck methode, wich can be overwritten to achive
   * a different behavour. It initialises the deck with all cards.
   */
  Deck() {
    this->setupDeck();
  }

  ~Deck() {
    cards.clear();
  };
  /**
   * explicitly deleted the copy constructor because unique pointer dont work with the
   * default constructor
   * @param [name] [description]
   */
  Deck(const Deck&) = delete;

  /**
   * this methode initialises a deck with one card each type. This works generically
   * for each face and suite type as long as they are subtype of cardProperty
   * This methode can be overwritten to implement a different setup behavour
   */
  virtual void setupDeck() {
    Card<FACE,SUITE> firstCard = Card<FACE,SUITE>();
    Card<FACE,SUITE> tmpCard = Card<FACE,SUITE>(firstCard);
    do {
      Card<FACE,SUITE> tmpCard2 = Card<FACE,SUITE>(tmpCard);
      do {
        tmpCard.incFace();
        this->cards.push_back(std::unique_ptr<CardBase>(new Card<FACE,SUITE>(tmpCard)));
      } while(tmpCard != tmpCard2);
      tmpCard.incSuite();
    } while(firstCard != tmpCard);
  }

  /**
   * cleas the deck with all cards in it.
   */
  void clear()  {
    this->cards.clear();
    this->setupDeck();
  }

  /**
   * shuffles the deck with a given shuffle algorithm. This shuffle algorithm must
   * be subtype of the abstract class Shuffle Algorithem. There is a default
   * implementation that will be apllied when called with no arguments
   * @param a A shuffle algorithm shared ptr. is optional!
   */
  void shuffle(std::shared_ptr<ShuffleAlgorithm> a = std::make_shared<DefaultAlgorithm>()) {
      a->shuffle(this->cards);
  };

  /**
   * @return the top card of the deck
   */
  Card<FACE,SUITE> getTop() {
    return *static_cast<Card<FACE,SUITE>*>(cards.at(cards.size()-1).get());
  };

  /**
   * removes the top card of the deck. Does nothing if the deck is empty.
   */
  void popTop() {
    if (!isEmpty()){
      cards.pop_back();
    }
  }

  /**
   * Checks if the deck is empty
   * @return true if the deck is empty
   */
  bool isEmpty() {
    return cards.empty();
  }

};
#endif
