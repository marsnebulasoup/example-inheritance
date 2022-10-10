/*********************
Name: Kevin Bryniak
Assignment: Classes and Objects
Purpose: An example of how to use inheritance in C++.
**********************/

#include "main.h"

int main()
{
  LightBulb lightbulb1(40, 320, 2600, 1500);
  LightBulb lightbulb2(-40, -320, -2600, -1500);
  LightBulb lightbulb3(40, -320, 2600, -1500);
  LightBulb lightbulb4(0, 0, 0, 0);
  LightBulb lightbulb5;

  SmartBulb smartbulb1(9, 800, 1000, 5000, 15000, true);
  SmartBulb smartbulb2(-9, -800, -1000, -5000, -15000, false);
  SmartBulb smartbulb3(-9, -800, 1000, -5000, 15000, true);
  SmartBulb smartbulb4(0, 0, 0, 0, 0, true);
  SmartBulb smartbulb5(0, 0, 0, 0, 0, false);

  displayLightBulb(lightbulb1);
  displayLightBulb(lightbulb2);
  displayLightBulb(lightbulb3);
  displayLightBulb(lightbulb4);
  displayLightBulb(lightbulb5);

  displaySmartBulb(smartbulb1);
  displaySmartBulb(smartbulb2);
  displaySmartBulb(smartbulb3);
  displaySmartBulb(smartbulb4);
  displaySmartBulb(smartbulb5);
  displayLightBulb(smartbulb1);

  return 0;
}