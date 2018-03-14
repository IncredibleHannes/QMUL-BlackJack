#include "FrenchSuite.h"

FrenchSuite::FrenchSuite(const FrenchSuite& other) {

}

void FrenchSuite::inc() {
  return;
}

bool FrenchSuite::doCompare(const CardProperty& toCompare) const {
  return true; // TODO: fix this
  const FrenchSuite *tC = dynamic_cast<const FrenchSuite*>(&toCompare);
  if (tC == nullptr)
    return false;
  return this->suite == tC->suite;
}

std::string FrenchSuite::getName() const {
  return "test";
}

int FrenchSuite::getValue() const {
  return 1;
}
