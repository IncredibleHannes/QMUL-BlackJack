#include "Face.h"

Face Face::operator++(int) {
  Face tmp = Face(*this);
  operator++();
  return tmp;
}

Face& Face::operator++(){
  return *this;
}

bool Face::operator==(const Face& toCompare) const {
  return true;
}
