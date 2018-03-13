#include <iostream>

#include "Card.h"
#include "Deck.h"
#include "FrenchFace.h"
#include "FrenchSuite.h"


int main(int argc, char const *argv[]) {
  Deck<FrenchFace, FrenchSuite> d = Deck<FrenchFace, FrenchSuite>();
  d.shuffle();
  std::cout << "hello world" << std::endl;
  return 0;
}
