#include "Controller.h"

Controller::Controller()
  : view(View()), playerHand(Hand<FrenchFace, FrenchSuite>(5)),
    cpuHand(Hand<FrenchFace, FrenchSuite>(5)), deck(Deck<FrenchFace, FrenchSuite>()) {};

void Controller::run(){
  while (true) {
    this->deck = Deck<FrenchFace, FrenchSuite>();
    this->deck.shuffle();
    this->dealFirstTwoCards();

    this->view.showHand(this->playerHand);
    this->playersTurn();

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

void Controller::playersTurn() {
  while(view.askPlayerTwistOrStick()) {
    this->playerHand.addCard(this->deck.getTop());
    this->deck.popTop();
    this->view.showHand(this->playerHand);
    if (isBust(this->playerHand)){
      view.printBust();
      return;
    } else if (playerHand.getSize() >= 5){
      return;
    }
  }
}

bool Controller::isBust(Hand<FrenchFace, FrenchSuite> h) {
  return h.getValue() > 21;
}
