#include <iostream>

#include "Card.h"
#include "Deck.h"
#include "FrenchFace.h"
#include "FrenchSuite.h"


int main(int argc, char const *argv[]) {
  Deck<FrenchFace, FrenchSuite> d = Deck<FrenchFace, FrenchSuite>();
  //d.shuffle();

  while(!d.isEmpty()) {
    std::cout << d.getTop()->getFace().getName() << std::endl;
    d.popTop();
  }
  return 0;
}
