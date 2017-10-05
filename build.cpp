#include "mk8.h"

build::build(part * cha, part * bod, part * whe, part * gli){

  character = cha;
  body = bod;
  wheels = whe;
  glider = gli;
  totalGroundSpeed = cha->getGroundSpeed() + bod->getGroundSpeed() + whe->getGroundSpeed() + gli->getGroundSpeed();
  totalWaterSpeed = cha->getWaterSpeed() + bod->getWaterSpeed() + whe->getWaterSpeed() + gli->getWaterSpeed();
  totalAirSpeed = cha->getAirSpeed() + bod->getAirSpeed() + whe->getAirSpeed() + gli->getAirSpeed();
  totalAGSpeed = cha->getAGSpeed() + bod->getAGSpeed() + whe->getAGSpeed() + gli->getAGSpeed();
  totalAcceleration = cha->getAcceleration() + bod->getAcceleration() + whe->getAcceleration() + gli->getAcceleration();
  totalWeight = cha->getWeight() + bod->getWeight() + whe->getWeight() + gli->getWeight();
  totalGroundHandling = cha->getGroundHandling() + bod->getGroundHandling() + whe->getGroundHandling() + gli->getGroundHandling();
  totalWaterHandling = cha->getWaterHandling() + bod->getWaterHandling() + whe->getWaterHandling() + gli->getWaterHandling();
  totalAirHandling = cha->getAirHandling() + bod->getAirHandling() + whe->getAirHandling() + gli->getAirHandling();
  totalAGHandling = cha->getAGHandling() + bod->getAGHandling() + whe->getAGHandling() + gli->getAGHandling();
  totalTraction = cha->getTraction() + bod->getTraction() + whe->getTraction() + gli->getTraction();
  totalMiniTurbo = cha->getMiniTurbo() + bod->getMiniTurbo() + whe->getMiniTurbo() + gli->getMiniTurbo();

}

part * build::getCharacter(){

  return character;

}

part * build::getBody(){

  return body;

}

part * build::getWheels(){

  return wheels;


}

part * build::getGlider(){

  return glider;

}

float build::getTotalGroundSpeed(){

  return totalGroundSpeed;

}

float build::getTotalWaterSpeed(){

  return totalWaterSpeed;

}

float build::getTotalAirSpeed(){

  return totalAirSpeed;

}

float build::getTotalAGSpeed(){

  return totalAGSpeed;


}

float build::getTotalAcceleration(){

  return totalAcceleration;


}

float build::getTotalWeight(){

  return totalWeight;

}

float build::getTotalGroundHandling(){

  return totalGroundHandling;

}

float build::getTotalWaterHandling(){

  return totalWaterHandling;


}

float build::getTotalAirHandling(){

  return totalAirHandling;

}

float build::getTotalAGHandling(){

  return totalAGHandling;

}

float build::getTotalTraction(){

  return totalTraction;

}

float build::getTotalMiniTurbo(){

  return totalMiniTurbo;

}
