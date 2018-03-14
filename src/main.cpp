#include <iostream>

#include "Card.h"
#include "Deck.h"
#include "FrenchFace.h"
#include "FrenchSuite.h"


int main(int argc, char const *argv[]) {
  Deck<FrenchFace, FrenchSuite> d = Deck<FrenchFace, FrenchSuite>();
  d.shuffle();

  while(!d.isEmpty()) {
    Card<FrenchFace, FrenchSuite> tmp = d.getTop();
    d.popTop();
    std::cout <<tmp.getFace().getName() << std::endl;
  }
  return 0;
}
