#include "Suite.h"

Suite Suite::operator++(int) {
  Suite tmp = Suite(*this);
  operator++();
  return tmp;
}

Suite& Suite::operator++(){
  return *this;
}

bool Suite::operator==(const Suite& toCompare) const {
  return true;
}
