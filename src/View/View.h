/**
    <h1>View</h1>
    <h3>View.cpp</h3><br>
    This class is representing the view. The whole game is implemented
    in the Model View Controller style. It handles all user interaction
    and prints out every output.


    @author Johannes Hartmann
    @version 1.0
*/
#ifndef VIEW_H_
#define VIEW_H_

#include <iostream>

#include "Hand.h"
#include "FrenchFace.h"
#include "FrenchSuite.h"

class View {
public:
  /**
   * It is printing a given hand to the console. It is also taking a string
   * that it puts infront of the output. It is used to distinguish if its the
   * users hand or the banks hand
   */
  void showHand(Hand<FrenchFace, FrenchSuite> h, std::string s);
  /**
   * It is performing the user input to ask if the user want to stick or twist
   * @return returns true if the user chooses to twist
   */
  bool askPlayerTwistOrStick();
  /**
   * asks the player if he wants to play another round
   * @return true if the player whants to play again
   */
  bool askPlayAgain();
  /**
   * printes a bust message to the console
   */
  void printBust();
  /**
   * printes a banks turn message to the console
   */
  void printBanksTurn();
  /**
   * printes a players won message to the console
   */
  void printPlayerWon();
  /**
   * printes a bank won message to the console
   */
  void printBankWon();
  /**
   * printes a draw message to the console
   */
  void printDraw();
  /**
   * printes a goodbye to the console
   */
  void printBye();
};
#endif
