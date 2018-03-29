/**
    <h1>FrenchSuite</h1>
    <h3>FrenchSuite.cpp</h3><br>
    This class is representing the face of a standard french card set.
    There are numbers from 2-10 and Jack, Queen and King

    @author Johannes Hartmann
    @version 1.0
*/

#ifndef FRENCHFACE_H_
#define FRENCHFACE_H_

#include "CardProperty.h"

class FrenchFace : public CardProperty {
public:
  enum Face{
    Ace, Two, Tree, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King
  };
  FrenchFace();
  FrenchFace(const FrenchFace& other);
  virtual void inc();
  virtual std::string getName() const;
  virtual int getValue() const;
private:
  virtual bool doCompare(const CardProperty& face) const;
  Face face;
};
#endif
