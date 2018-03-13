/**
    <h1>Face</h1>
    <h3>Face.cpp</h3><br>
    This class is representing the Face of a card


    @author Johannes Hartmann
    @version 1.0
*/

#ifndef FACE_H_
#define FACE_H_

class Face {
public:
  virtual Face& operator++();
  virtual Face operator++(int);
  virtual bool operator==(const Face& toCompare) const;
};
#endif
