#ifndef VIEW_H_
#define VIEW_H_

#include <iostream>

#include "Hand.h"
#include "FrenchFace.h"
#include "FrenchSuite.h"

class View {
public:
  void showHand(Hand<FrenchFace, FrenchSuite> h, std::string s);
  bool askPlayerTwistOrStick();
  bool askPlayAgain();
  void printBust();
  void printBanksTurn();
  void printPlayerWon();
  void printBankWon();
  void printBye();
};
#endif
