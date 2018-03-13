#include "Card.h"

Card::Card(const Card &other){
  this->face = Face(other.face);
  this->suite = Suite(other.suite);
};

void Card::incFace() {
  this->face++;
}

void Card::incSuite() {
  this->suite++;
}

bool Card::operator!=(const Card& toCompare) const {
  return !(this->face == toCompare.face && this->suite == toCompare.suite);
}
