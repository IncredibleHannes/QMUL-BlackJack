/**
    <h1>FrenchSuite</h1>
    <h3>FrenchSuite.cpp</h3><br>
    This class is representing the suite of a standard french card set.
    There are 4 types: Diamod, Hears, Sades, Clubs

    @author Johannes Hartmann
    @version 1.0
*/

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
