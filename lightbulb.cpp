/*********************
Name: Kevin Bryniak
Assignment: Classes and Objects
Purpose: A refresher assignment on classes and objects.
**********************/

#include "lightbulb.h"

LightBulb::LightBulb() {
  setEnergyConsumption(DEFAULT_WATTAGE);
  setBrightness(DEFAULT_LUMENS);
  setColor(DEFAULT_COLOR);
  setLifespan(DEFAULT_LIFESPAN);
}

LightBulb::LightBulb(int wattage, int lumens, int color, int lifespan)
{
  setEnergyConsumption(wattage);
  setBrightness(lumens);
  setColor(color);
  setLifespan(lifespan);
}

int LightBulb::getEnergyConsumption()
{
  return wattage;
}

int LightBulb::getBrightness()
{
  return lumens;
}

int LightBulb::getColor()
{
  return color;
}

int LightBulb::getLifespan()
{
  return lifespan;
}

int LightBulb::getLifetimeEnergyConsumption()
{
  return wattage * lifespan * HOUR_TO_SEC * JOULE_TO_KWH;
}

void LightBulb::setEnergyConsumption(int wattage)
{
  this->wattage = wattage > 0 ? wattage : DEFAULT_WATTAGE;
}

void LightBulb::setBrightness(int lumens)
{
  this->lumens = lumens > 0 ? lumens : DEFAULT_LUMENS;
}

void LightBulb::setColor(int color)
{
  this->color = color > 0 ? color : DEFAULT_COLOR;
}

void LightBulb::setLifespan(int lifespan)
{
  this->lifespan = lifespan > 0 ? lifespan : DEFAULT_LIFESPAN;
}