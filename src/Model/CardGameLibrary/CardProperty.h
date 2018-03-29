/**
    <h1>Face</h1>
    <h3>Face.cpp</h3><br>
    This class is representing either the face or the suite of a card
    In order to enable authomatic setup of decks face uns suite must implement
    an equals relation and an increment function. It has also a name.

    @author Johannes Hartmann
    @version 1.0
*/

#ifndef CARDPROPERTY_H_
#define CARDPROPERTY_H_

#include <string>

class CardProperty {
public:
  /**
   * increments the property of a cartd. must be cyclic, so if you reach the highest
   * value you start again with the lowest value
   */
  virtual void inc() = 0;
  virtual bool operator==(const CardProperty& toCompare) const;
  /**
   * Every card property neads a string name.
   * @return [description]
   */
  virtual std::string getName() const = 0;
  /**
   * every card property also hase a value
   * @return the value of a card property
   */
  virtual int getValue() const = 0;
private:
  /**
   * the actual equals implementation.
   * @param  toCompare [description]
   * @return           true if they are equal
   */
  virtual bool doCompare(const CardProperty& toCompare) const = 0;
};
#endif
