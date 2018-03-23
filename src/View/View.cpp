#include "View.h"

void View::showHand(Hand<FrenchFace, FrenchSuite> h) {
  std::cout << "your hand is: " << std::endl << std::endl;
  for(Card<FrenchFace, FrenchSuite> c : h) {
    std::cout << c.getFace().getName() << " of " << c.getSuite().getName() << std::endl;
  }
  std::cout << "value = " << h.getValue() << std::endl << std::endl;
}

bool View::askPlayerTwistOrStick() {
  return true;
}

void View::printBust() {
  std::cout << "BUST!!" << std::endl;
}
