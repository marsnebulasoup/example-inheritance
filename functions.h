/*********************
Name: Kevin Bryniak
Assignment: Classes and Objects
Purpose: An example of how to use inheritance in C++.
**********************/

#ifndef LB_FUNCTIONS_H
#define LB_FUNCTIONS_H

#include "lightbulb.h"
#include "smartbulb.h"
#include <iostream>

using std::cout;
using std::endl;

void displayLightBulb(LightBulb& lightbulb);
void displaySmartBulb(SmartBulb& smartbulb);

#endif