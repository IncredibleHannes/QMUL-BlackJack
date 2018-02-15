/**
    <h1>Card</h1>
    <h3>Card.cpp</h3><br>
    This class is representing a card of a standard french set of cards


    @author Johannes Hartmann
    @version 1.0
*/

#ifndef CARD_H
#define CARD_H
template <typename FACE, typename SUITE>
class Card {
public:
  Card(FACE f, SUITE s)
    : face(f), suite(s) {};

  FACE getFace() {return this->face;};
  SUITE getSuite() {return this->suite;};

private:
  FACE face;
  SUITE suite;

};
#endif
