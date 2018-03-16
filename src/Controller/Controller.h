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

#include "View.h"
#include "Deck.h"
#include "FrenchFace.h"
#include "FrenchSuite.h"

class Controller {
public:
  /**
   * Starts the game and implements the whole game cicle
   */
  void run();

private:
  Deck<FrenchFace, FrenchSuite> deck;


};
#endif
