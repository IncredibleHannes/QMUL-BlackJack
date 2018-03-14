/**
    <h1>Card</h1>
    <h3>Card.cpp</h3><br>
    This class is representing a card of a standard french set of cards


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
  Card()
    : face(FACE()), suite(SUITE()) { };

  Card(FACE f, SUITE s)
  : face(f), suite(s) { };

  Card(const Card<FACE,SUITE> &other)
    : face(other.face), suite(other.suite) { };

  FACE getFace() { return this->face; };
  SUITE getSuite() { return this->suite; };

  void incFace() { face.inc(); };
  void incSuite() { suite.inc(); };
  bool operator!=(const Card& toCompare) const {
    return !(this->face == toCompare.face && this->suite == toCompare.suite);
  };

private:
  FACE face;
  SUITE suite;
};
#endif
