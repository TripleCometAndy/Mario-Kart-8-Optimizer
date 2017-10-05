#include "mk8.h"

part::part(string t, float gs, float ws, float as, float ags, float acc, float w, float gh, float wh, float ah, float agh, float tr, float mt){

  type = t;
  groundSpeed = gs;
  waterSpeed = ws;
  airSpeed = as;
  agSpeed = ags;
  acceleration = acc;
  weight = w;
  groundHandling = gh;
  waterHandling = wh;
  airHandling = ah;
  agHandling = agh;
  traction = tr;
  miniTurbo = mt;

}

string part::getType(){

  return type;
}

float part::getGroundSpeed(){

  return groundSpeed;

}

float part::getWaterSpeed(){

  return waterSpeed;

}

float part::getAirSpeed(){

  return airSpeed;

}

float part::getAGSpeed(){

  return agSpeed;


}

float part::getAcceleration(){

  return acceleration;


}

float part::getWeight(){

  return weight;

}

float part::getGroundHandling(){

  return groundHandling;

}

float part::getWaterHandling(){

  return waterHandling;


}

float part::getAirHandling(){

  return airHandling;

}

float part::getAGHandling(){

  return agHandling;

}

float part::getTraction(){

  return traction;

}

float part::getMiniTurbo(){

  return miniTurbo;

}
