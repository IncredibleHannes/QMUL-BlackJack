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
  /**
   * This methodes deales two cards to the players and the banks hand from the
   * deck
   */
  void dealFirstTwoCards();
  /**
   * first asks the player if he wants to stick or twist and then either deals a
   * card to the players hand or continues. This can be done until the player has
   * 5 cards or goes bust
   */
  void playersTurn();
  /**
   * Deals the bakns hand cards until he has a greater or equals score to the player
   * or has 5 cards or goes bust
   */
  void cpuTurn();
  /**
   * checks if a given hand h is bust or not.
   */
  bool isBust(Hand<FrenchFace, FrenchSuite> h);

private:
  /**the banks hand
   * The view is responsible of all console out and inputs.
   */
  View view;
  /**
   * The logger is responsible of all file outputs.
   */
  FileLogger logger;
  /**
   * Represents the players hand.
   */
  Hand<FrenchFace, FrenchSuite> playerHand;
  /**
   * Represents the banks hand.
   */
  Hand<FrenchFace, FrenchSuite> cpuHand;
  /**
   * Represents the deck of cars.
   */
  Deck<FrenchFace, FrenchSuite> deck;

};
#endif
