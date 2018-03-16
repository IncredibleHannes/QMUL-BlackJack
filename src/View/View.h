#ifndef VIEW_H_
#define VIEW_H_

#include <iostream>

#include "Hand.h"
#include "FrenchFace.h"
#include "FrenchSuite.h"

class View {
public:
  void showHand(Hand<FrenchFace, FrenchSuite> h);
};
#endif
