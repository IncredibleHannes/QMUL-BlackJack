/**
    <h1>Card</h1>
    <h3>Card.cpp</h3><br>
    This class is representing a card of a standard french set of cards


    @author Johannes Hartmann
    @version 1.0
*/

#ifndef CARD_H_
#define CARD_H_

#include "Face.h"
#include "Suite.h"

class Card {
public:
  Card(Face f, Suite s)
    : face(f), suite(s) {};
  Card(const Card &other);

  Face getFace() {return this->face;};
  Suite getSuite() {return this->suite;};
  void incFace();
  void incSuite();
  bool operator!=(const Card& toCompare) const;

private:
  Face face;
  Suite suite;

};
#endif
