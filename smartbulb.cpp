/*********************
Name: Kevin Bryniak
Assignment: Classes and Objects
Purpose: An example of how to use inheritance in C++.
**********************/

#include "smartbulb.h"

SmartBulb::SmartBulb(int wattage, int lumens, int minColor, int maxColor, int lifespan, bool hasBluetooth)
{
  setEnergyConsumption(wattage);
  setBrightness(lumens);
  setMinColor(minColor);
  setMaxColor(maxColor);
  setLifespan(lifespan);
  setBluetooth(hasBluetooth);
}

int SmartBulb::getMinColor() {
  return minColor;
}

int SmartBulb::getMaxColor() {
  return maxColor;
}

bool SmartBulb::getBluetooth() {
  return hasBluetooth;
}

void SmartBulb::setMinColor(int minColor)
{
  this->minColor = minColor > 0 ? minColor : DEFAULT_MIN_COLOR;
}

void SmartBulb::setMaxColor(int maxColor)
{
  this->maxColor = maxColor > 0 ? maxColor : DEFAULT_MAX_COLOR;
}

void SmartBulb::setBluetooth(bool hasBluetooth)
{ // since hasBluetooth is a boolean, there's really no need to validate it, 
  // but it cannot be modified afterwards without a setter, since it's private.
  this->hasBluetooth = hasBluetooth;
}