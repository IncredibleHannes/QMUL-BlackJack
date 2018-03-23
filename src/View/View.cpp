#include "View.h"

void View::showHand(Hand<FrenchFace, FrenchSuite> h, std::string s) {
  std::cout << s << " hand is: " << std::endl << std::endl;
  for(Card<FrenchFace, FrenchSuite> c : h) {
    std::cout << c.getFace().getName() << " of " << c.getSuite().getName() << std::endl;
  }
  std::cout << "value = " << h.getValue() << std::endl << std::endl;
}

bool View::askPlayerTwistOrStick() {
  while (true) {
    std::cout << "[s]tick or [t]wist? ";
    std::string input;
    std::cin >> input;
    std::cout << std::endl;
    switch (toupper(input[0])) {
      case 'S':
        return false;
      case 'T':
        return true;
    }
    std::cout << "Invalid input, please try again!" << std::endl << std::endl;
  }
}

bool View::askPlayAgain() {
  while (true) {
    std::cout << "do you want to play again ([y]es/[n]o)? ";
    std::string input;
    std::cin >> input;
    std::cout << std::endl;
    switch (toupper(input[0])) {
      case 'Y':
        return true;
      case 'N':
        return false;
    }
    std::cout << "Invalid input, please try again!" << std::endl << std::endl;
  }
}

void View::printBust() {
  std::cout << "BUST!!" << std::endl << std::endl;
}

void View::printBanksTurn() {
  std::cout << "the bank draws a card..." << std::endl << std::endl;
}

void View::printPlayerWon() {
  std::cout << "Well done, you won!!!" << std::endl << std::endl;
}

void View::printBankWon() {
  std::cout << "Bad luck, the bank won." << std::endl << std::endl;
}

void View::printBye() {
  std::cout << "Thanks, bye!" << std::endl << std::endl;
}
