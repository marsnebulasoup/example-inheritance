/*********************
Name: Kevin Bryniak
Assignment: Classes and Objects
Purpose: An example of how to use inheritance in C++.
**********************/

#ifndef LB_CLASS_SMARTBULB
#define LB_CLASS_SMARTBULB

#include "lightbulb.h"

#define DEFAULT_MIN_COLOR 0
#define DEFAULT_MAX_COLOR 0

class SmartBulb : public LightBulb
{
protected:
  int minColor; // in Kelvin
  int maxColor; // in Kelvin
  bool hasBluetooth;

public:
  SmartBulb(int, int, int, int, int, bool);

  int getMinColor();
  int getMaxColor();
  bool getBluetooth();

  void setMinColor(int);
  void setMaxColor(int);
  void setBluetooth(bool);

private:
  void getColor();
};

#endif