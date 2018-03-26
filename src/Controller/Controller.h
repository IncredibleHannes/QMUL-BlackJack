/**
    <h1>Controller</h1>
    <h3>Controller.cpp</h3><br>
    This class is representing the controller. The whole game is implemented
    in the Model View Controller style. The run methode implements the whole game cicle.


    @author Johannes Hartmann
    @version 1.0
*/
#ifndef CONTROLLER_H
#define CONTROLLER_H


#include <iostream>
#include "View.h"
#include "Deck.h"
#include "Hand.h"
#include "FrenchFace.h"
#include "FrenchSuite.h"
#include "View.h"
#include "FileLogger.h"

class Controller {
public:
  Controller();
  /**
   * Starts the game and implements the whole game cicle
   */
  void run();
  void dealFirstTwoCards();
  void playersTurn();
  void cpuTurn();
  bool isBust(Hand<FrenchFace, FrenchSuite> h);

private:
  View view;
  FileLogger logger;
  Hand<FrenchFace, FrenchSuite> playerHand;
  Hand<FrenchFace, FrenchSuite> cpuHand;
  Deck<FrenchFace, FrenchSuite> deck;

};
#endif
