/**
    <h1>Face</h1>
    <h3>Face.cpp</h3><br>
    This class is representing the Face of a card


    @author Johannes Hartmann
    @version 1.0
*/

#ifndef CARDPROPERTY_H_
#define CARDPROPERTY_H_

#include <string>

class CardProperty {
public:
  CardProperty() = default;
  virtual void inc() = 0;;
  virtual bool operator==(const CardProperty& toCompare) const;
  virtual std::string getName() const = 0;
  virtual int getValue() const = 0;
private:
  virtual bool doCompare(const CardProperty& toCompare) const = 0;
};
#endif
