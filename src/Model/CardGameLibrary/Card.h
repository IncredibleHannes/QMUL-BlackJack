/**
    <h1>Card</h1>
    <h3>Card.cpp</h3><br>
    This class is representing a card. It is generically generated and works with
    every face and suite that are subclass of CardProperty.

    @author Johannes Hartmann
    @version 1.0
*/

#ifndef CARD_H_
#define CARD_H_

#include <memory>
#include "CardProperty.h"

class CardBase {

};


template <typename FACE, typename SUITE>
class Card : public CardBase {
static_assert(std::is_base_of<CardProperty, FACE>::value, "FACE parameter not derived from Face");
static_assert(std::is_base_of<CardProperty, SUITE>::value, "SUITE parameter not derived from Suite");
public:

  /**
   * constructor initialises a card with the lowest face and suite value
   */
  Card()
    : face(FACE()), suite(SUITE()) { };
  /**
   * getter fot the face field
   * @return face of the card
   */
  FACE getFace() { return this->face; };
  /**
   * getter fot the suite field
   * @return suite of the card
   */
  SUITE getSuite() { return this->suite; };
  /**
   * increments the face of the card.
   */
  void incFace() { face.inc(); };
  /**
   * increments the suite of the card.
   */
  void incSuite() { suite.inc(); };
  /**
   * overloaded not equal operator. A card is not equal anothar card if face and
   * suite are not equal
   */
  bool operator!=(const Card& toCompare) const {
    return !(this->face == toCompare.face && this->suite == toCompare.suite);
  };

private:
  FACE face;
  SUITE suite;
};
#endif
