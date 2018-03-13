#include "CardProperty.h"

bool CardProperty::operator==(const CardProperty &toCompare) const {
  return this->doCompare(toCompare);
}
