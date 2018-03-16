#include "Controller.h"

Controller::Controller()
  : playerHand(Hand<FrenchFace, FrenchSuite>(5)), cpuHand(Hand<FrenchFace, FrenchSuite>(5)),
    deck(Deck<FrenchFace, FrenchSuite>()) {};

void Controller::run(){
  while (true) {
    this->deck = Deck<FrenchFace, FrenchSuite>();
    this->deck.shuffle();
    this->dealFirstTwoCards();

    for(Card<FrenchFace, FrenchSuite> c : this->playerHand) {
      std::cout << c.getFace().getName() << ":" << c.getSuite().getName() << std::endl;
    }
    break;
  }
}

void Controller::dealFirstTwoCards() {
  for(int i = 0; i < 2; i++){
    this->cpuHand.addCard(this->deck.getTop());
    this->deck.popTop();
    this->playerHand.addCard(this->deck.getTop());
    this->deck.popTop();
  }
};
