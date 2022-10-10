/*********************
Name: Kevin Bryniak
Assignment: Classes and Objects
Purpose: An example of how to use inheritance in C++.
**********************/

#include "functions.h"

void displayLightBulb(LightBulb &lightbulb)
{
  static int currentLightBulb;
  currentLightBulb++;
  cout << "Lightbulb " << currentLightBulb << endl;
  cout << " - Energy consumption: " << lightbulb.getEnergyConsumption() << " W" << endl;
  cout << " - Brightness: " << lightbulb.getBrightness() << " Lumens" << endl;
  cout << " - Color: " << lightbulb.getColor() << " K" << endl;
  cout << " - Lifespan: " << lightbulb.getLifespan() << " hours" << endl;
  cout << " - Lifetime energy consumption: " << lightbulb.getLifetimeEnergyConsumption() << " kWh" << endl;
  cout << endl;
}

void displaySmartBulb(SmartBulb &smartbulb)
{
  static int currentSmartBulb;
  currentSmartBulb++;
  cout << "Smartbulb " << currentSmartBulb << endl;
  cout << " - Energy consumption: " << smartbulb.getEnergyConsumption() << " W" << endl;
  cout << " - Brightness: " << smartbulb.getBrightness() << " Lumens" << endl;
  cout << " - Min Color: " << smartbulb.getMinColor() << " K" << endl;
  cout << " - Max Color: " << smartbulb.getMaxColor() << " K" << endl;
  cout << " - Lifespan: " << smartbulb.getLifespan() << " hours" << endl;
  cout << " - Lifetime energy consumption: " << smartbulb.getLifetimeEnergyConsumption() << " kWh" << endl;
  cout << endl;
}