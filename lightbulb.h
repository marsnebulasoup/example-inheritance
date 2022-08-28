/*********************
Name: Kevin Bryniak
Assignment: Classes and Objects
Purpose: A refresher assignment on classes and objects.
**********************/

#ifndef LB_CLASS_LIGHTBULB
#define LB_CLASS_LIGHTBULB

#define DEFAULT_WATTAGE 0
#define DEFAULT_LUMENS 0
#define DEFAULT_LIFESPAN 0
#define DEFAULT_COLOR 0

#define HOUR_TO_SEC 3600
#define JOULE_TO_KWH 0.0000002778 // kWh equivalent to 1 J

class LightBulb
{
protected:
  int wattage;  // in Watts
  int lumens;   // in Lumens
  int color;    // in Kelvin
  int lifespan; // in hours
public:
  LightBulb();
  LightBulb(int, int, int, int);

  int getEnergyConsumption();         // in Watts
  int getBrightness();                // in Lumens
  int getColor();                     // in Kelvin
  int getLifespan();                  // in hours
  int getLifetimeEnergyConsumption(); // in kWh

  void setEnergyConsumption(int);
  void setBrightness(int);
  void setColor(int);
  void setLifespan(int);
};

#endif