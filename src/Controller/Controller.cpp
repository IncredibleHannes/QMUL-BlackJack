#include "Controller.h"

Controller::Controller()
  : view(View()), playerHand(Hand<FrenchFace, FrenchSuite>(5)),
    cpuHand(Hand<FrenchFace, FrenchSuite>(5)), deck(Deck<FrenchFace, FrenchSuite>()) {};

void Controller::run(){
  while (true) {
    //game initialisation
    this->deck = Deck<FrenchFace, FrenchSuite>();
    this->deck.shuffle();
    this->playerHand.clearHand();
    this->cpuHand.clearHand();


    this->dealFirstTwoCards();

    this->view.showHand(this->playerHand, "your");
    this->playersTurn();
    if (this->isBust(this->playerHand)){
      this->view.printBankWon();
    } else {
      this->cpuTurn();
    }

    if (! this->view.askPlayAgain()) {
      this->view.printBye();
      break;
    }
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
    this->view.showHand(this->playerHand, "your");
    if (isBust(this->playerHand)){
      view.printBust();
      return;
    } else if (playerHand.getSize() >= 5){
      return;
    }
  }
}

void Controller::cpuTurn() {
  while(cpuHand.getValue() < playerHand.getValue() && cpuHand.getSize() < 5) {
    this->view.printBanksTurn();
    this->cpuHand.addCard(this->deck.getTop());
    this->deck.popTop();
    this->view.showHand(this->cpuHand, "banks");
    if (isBust(this->cpuHand)) {
      view.printBust();
      view.printPlayerWon();
      return;
    }
  }
  if (cpuHand.getValue() < playerHand.getValue()) {
    this->view.printPlayerWon();
  } else if(cpuHand.getValue() == playerHand.getValue()) {
    if (cpuHand.getSize() > playerHand.getSize()) {
      this->view.printBankWon();
    } else if (cpuHand.getSize() == playerHand.getSize()) {
      this->view.printDraw();
    } else {
      this->view.printPlayerWon();
    }
  } else {
    this->view.printBankWon();
  }
}

bool Controller::isBust(Hand<FrenchFace, FrenchSuite> h) {
  return h.getValue() > 21;
}
