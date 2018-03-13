#ifndef FRENCHFACE_H_
#define FRENCHFACE_H_

#include "CardProperty.h"

class FrenchFace : public CardProperty {
public:
  FrenchFace() = default;
  FrenchFace(const FrenchFace& other);
  virtual void inc();
  virtual std::string getName() const;
  virtual int getValue() const;
private:
  virtual bool doCompare(const CardProperty& face) const;
};
#endif
