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
