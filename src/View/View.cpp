#include "View.h"

void View::showHand(Hand<FrenchFace, FrenchSuite> h) {
  for(Card<FrenchFace, FrenchSuite> c : h) {
    std::cout << c.getFace().getName() << ":" << c.getSuite().getName() << std::endl;
  }
}
