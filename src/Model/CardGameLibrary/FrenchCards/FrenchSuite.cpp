#include "FrenchSuite.h"

FrenchSuite::FrenchSuite(const FrenchSuite& other)
  : suite(other.suite) { }

void FrenchSuite::inc() {
  if (this->suite == Clubs) {
    this->suite = Diamond;
  } else {
    this->suite = static_cast<Suite>(this->suite + 1);
  }
}

bool FrenchSuite::doCompare(const CardProperty& toCompare) const {
  const FrenchSuite *tC = dynamic_cast<const FrenchSuite*>(&toCompare);
  if (tC == nullptr)
    return false;
  return this->suite == tC->suite;
}

std::string FrenchSuite::getName() const {
  switch (suite) {
    case Diamond: return "Diamond";
    case Heart: return "Heart";
    case Sades: return "Sades";
    case Clubs: return "Clubs";
  }
  return "";
}

int FrenchSuite::getValue() const {
  return 1;
}
