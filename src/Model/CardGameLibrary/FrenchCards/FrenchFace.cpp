#include "FrenchFace.h"

FrenchFace::FrenchFace(const FrenchFace& other)
  : face(other.face) { }

FrenchFace::FrenchFace()
  : face(Ace) { }

void FrenchFace::inc() {
  if (this->face == King) {
    this->face = Ace;
  } else {
    this->face = static_cast<Face>(this->face + 1);
  }
}

bool FrenchFace::doCompare(const CardProperty& toCompare) const {
  const FrenchFace *tC = dynamic_cast<const FrenchFace*>(&toCompare);
  if (tC == nullptr)
    return false;
  return this->face == tC->face;
}

std::string FrenchFace::getName() const {
  switch(this->face) {
    case Ace   : return "Ace";
    case Two   : return "Two";
    case Tree  : return "Three";
    case Four  : return "Four";
    case Five  : return "Five";
    case Six   : return "Six";
    case Seven : return "Seven";
    case Eight : return "Eight";
    case Nine  : return "Nine";
    case Ten   : return "Ten";
    case Jack  : return "Jack";
    case Queen : return "Queen";
    case King  : return "King";
  }
  return "";
}

int FrenchFace::getValue() const {
  switch(this->face) {
    case Ace   : return 1;
    case Two   : return 2;
    case Tree  : return 3;
    case Four  : return 4;
    case Five  : return 5;
    case Six   : return 6;
    case Seven : return 7;
    case Eight : return 8;
    case Nine  : return 9;
    case Ten   : return 10;
    case Jack  : return 10;
    case Queen : return 10;
    case King  : return 10;
  }
  return "";
}
