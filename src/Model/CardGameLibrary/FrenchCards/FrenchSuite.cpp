#include "FrenchSuite.h"

FrenchSuite::FrenchSuite(const FrenchSuite& other) {

}

void FrenchSuite::inc() {
  return;
}

bool FrenchSuite::doCompare(const CardProperty& toCompare) const {
  return true;
}

std::string FrenchSuite::getName() const {
  return "test";
}

int FrenchSuite::getValue() const {
  return 1;
}
