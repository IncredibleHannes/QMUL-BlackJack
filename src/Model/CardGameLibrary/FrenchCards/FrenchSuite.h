#ifndef FRENCHSUITE_H_
#define FRENCHSUITE_H_

#include "CardProperty.h"

class FrenchSuite : public CardProperty {
public:
  enum Suite { Diamond, Heart, Sades, Clubs };
  FrenchSuite() = default;
  FrenchSuite(const FrenchSuite& other);
  virtual void inc();
  virtual std::string getName() const;
  virtual int getValue() const;
private:
  virtual bool doCompare(const CardProperty& suite) const;
  Suite suite;
};
#endif
