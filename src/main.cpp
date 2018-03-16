#include <iostream>

#include "Controller.h"
#include "Card.h"
#include "Deck.h"
#include "FrenchFace.h"
#include "FrenchSuite.h"


int main(int argc, char const *argv[]) {
  Controller c = Controller();
  c.run();
  return 0;
}
