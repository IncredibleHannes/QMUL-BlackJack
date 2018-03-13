#include "FrenchFace.h"

FrenchFace::FrenchFace(const FrenchFace& other) {

}

void FrenchFace::inc() {
  return;
}

bool FrenchFace::doCompare(const CardProperty& toCompare) const {
  return true;
}

std::string FrenchFace::getName() const {
  return "test";
}

int FrenchFace::getValue() const {
  return 1;
}
