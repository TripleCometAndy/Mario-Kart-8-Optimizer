#include "mk8.h"

bool optimize(part * character, part * body, part * wheel, part * glider,
   userInput input, vector<part *> characters, vector<part *> bodies,
   vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds, float gAverageGroundSpeed, float gAverageWaterSpeed, float gAverageAirSpeed, float gAverageGravSpeed, float gAverageAccel, float gAverageWeight, float gAverageGroundHandling, float gAverageWaterHandling,float gAverageAirHandling, float gAverageGravHandling,float gAverageTraction,float gAverageMiniTurbo){

  float totalGroundSpeed = 0;
  float totalWaterSpeed = 0;
  float totalAirSpeed = 0;
  float totalAGSpeed = 0;
  float totalAcceleration = 0;
  float totalWeight = 0;
  float totalGroundHandling = 0;
  float totalWaterHandling = 0;
  float totalAirHandling = 0;
  float totalAGHandling = 0;
  float totalTraction = 0;
  float totalMiniTurbo = 0;

  float secondOperand = 0;

  if(input.getSignTotalGroundSpeed() != 6){

    totalGroundSpeed = character->getGroundSpeed() + body->getGroundSpeed() + wheel->getGroundSpeed() + glider->getGroundSpeed();

    if(input.getCustomGroundSpeed() == 1){

      //secondOperand = averageGroundSpeed(characters, bodies, wheels, gliders, prevBuilds);
      secondOperand = gAverageGroundSpeed;
    }
    else if(input.getCustomGroundSpeed() == 2){

      secondOperand = input.getTargetTotalGroundSpeed();

    }


  }

  if(input.getSignTotalGroundSpeed() == 1){

    if(totalGroundSpeed != secondOperand){

      return false;

    }


  }
  else if(input.getSignTotalGroundSpeed() == 2){

    if(!(totalGroundSpeed < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalGroundSpeed() == 3){

    if(!(totalGroundSpeed > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalGroundSpeed() == 4){

    if(!(totalGroundSpeed <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalGroundSpeed() == 5){

    if(!(totalGroundSpeed >= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalGroundSpeed() == 6){



  }
////////////////////////////////////

  if(input.getSignTotalWaterSpeed() != 6){

    totalWaterSpeed = character->getWaterSpeed() + body->getWaterSpeed() + wheel->getWaterSpeed() + glider->getWaterSpeed();

    if(input.getCustomWaterSpeed() == 1){

      secondOperand = gAverageWaterSpeed;

    }
    else if(input.getCustomWaterSpeed() == 2){

      secondOperand = input.getTargetTotalWaterSpeed();

    }


  }

  if(input.getSignTotalWaterSpeed() == 1){

    if(totalWaterSpeed != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalWaterSpeed() == 2){

    if(!(totalWaterSpeed < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalWaterSpeed() == 3){

    if(!(totalWaterSpeed > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalWaterSpeed() == 4){

    if(!(totalWaterSpeed <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalWaterSpeed() == 5){

    if(!(totalWaterSpeed >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalWaterSpeed() == 6){



  }
/////////////////////////////////////////////////

  if(input.getSignTotalAirSpeed() != 6){

    totalAirSpeed = character->getAirSpeed() + body->getAirSpeed() + wheel->getAirSpeed() + glider->getAirSpeed();

    if(input.getCustomAirSpeed() == 1){

      secondOperand = gAverageAirSpeed;

    }
    else if(input.getCustomAirSpeed() == 2){

      secondOperand = input.getTargetTotalAirSpeed();

    }


  }

  if(input.getSignTotalAirSpeed() == 1){

    if(totalAirSpeed != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalAirSpeed() == 2){

    if(!(totalAirSpeed < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAirSpeed() == 3){

    if(!(totalAirSpeed > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAirSpeed() == 4){

    if(!(totalAirSpeed <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAirSpeed() == 5){


    if(!(totalAirSpeed >= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAirSpeed() == 6){



  }
  //////////////////////////////////////////

  if(input.getSignTotalAGSpeed() != 6){

    totalAGSpeed = character->getAGSpeed() + body->getAGSpeed() + wheel->getAGSpeed() + glider->getAGSpeed();

    if(input.getCustomAGSpeed() == 1){

      secondOperand = gAverageGravSpeed;

    }
    else if(input.getCustomAGSpeed() == 2){

      secondOperand = input.getTargetTotalAGSpeed();

    }


  }


  if(input.getSignTotalAGSpeed() == 1){

    if(totalAGSpeed != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalAGSpeed() == 2){

    if(!(totalAGSpeed < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAGSpeed() == 3){

    if(!(totalAGSpeed > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAGSpeed() == 4){

    if(!(totalAGSpeed <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAGSpeed() == 5){

    if(!(totalAGSpeed >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalAGSpeed() == 6){



  }
  /////////////////////////////////////////

  if(input.getSignTotalAcceleration() != 6){

    totalAcceleration = character->getAcceleration() + body->getAcceleration() + wheel->getAcceleration() + glider->getAcceleration();

    if(input.getCustomAcceleration() == 1){

      secondOperand = gAverageAccel;

    }
    else if(input.getCustomAcceleration() == 2){

      secondOperand = input.getTargetTotalAcceleration();

    }


  }


  if(input.getSignTotalAcceleration() == 1){

    if(totalAcceleration != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalAcceleration() == 2){

    if(!(totalAcceleration < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAcceleration() == 3){

    if(!(totalAcceleration > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAcceleration() == 4){

    if(!(totalAcceleration <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAcceleration() == 5){

    if(!(totalAcceleration >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalAcceleration() == 6){



  }
  ////////////////////////////////////////

  if(input.getSignTotalWeight() != 6){

    totalWeight = character->getWeight() + body->getWeight() + wheel->getWeight() + glider->getWeight();

    if(input.getCustomWeight() == 1){

      secondOperand = gAverageWeight;

    }
    else if(input.getCustomWeight() == 2){

      secondOperand = input.getTargetTotalWeight();

    }


  }




  if(input.getSignTotalWeight() == 1){

    if(totalWeight != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalWeight() == 2){

    if(!(totalWeight < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalWeight() == 3){

    if(!(totalWeight > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalWeight() == 4){

    if(!(totalWeight <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalWeight() == 5){

    if(!(totalWeight >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalWeight() == 6){



  }
  /////////////////////////////////////////

  if(input.getSignTotalGroundHandling() != 6){

    totalGroundHandling = character->getGroundHandling() + body->getGroundHandling() + wheel->getGroundHandling() + glider->getGroundHandling();

    if(input.getCustomGroundHandling() == 1){

      secondOperand = gAverageGroundHandling;

    }
    else if(input.getCustomGroundHandling() == 2){

      secondOperand = input.getTargetTotalGroundHandling();

    }


  }


  if(input.getSignTotalGroundHandling() == 1){

    if(totalGroundHandling != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalGroundHandling() == 2){

    if(!(totalGroundHandling < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalGroundHandling() == 3){

    if(!(totalGroundHandling > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalGroundHandling() == 4){

    if(!(totalGroundHandling <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalGroundHandling() == 5){

    if(!(totalGroundHandling >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalGroundHandling() == 6){



  }
  /////////////////////////////////////////////////

  if(input.getSignTotalWaterHandling() != 6){

    totalWaterHandling = character->getWaterHandling() + body->getWaterHandling() + wheel->getWaterHandling() + glider->getWaterHandling();

    if(input.getCustomWaterHandling() == 1){

      secondOperand = gAverageWaterHandling;

    }
    else if(input.getCustomWaterHandling() == 2){

      secondOperand = input.getTargetTotalWaterHandling();

    }


  }


  if(input.getSignTotalWaterHandling() == 1){

    if(totalWaterHandling != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalWaterHandling() == 2){

    if(!(totalWaterHandling < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalWaterHandling() == 3){

    if(!(totalWaterHandling > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalWaterHandling() == 4){

    if(!(totalWaterHandling <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalWaterHandling() == 5){

    if(!(totalWaterHandling >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalWaterHandling() == 6){



  }
  ////////////////////////////////////////////

  if(input.getSignTotalAirHandling() != 6){

    totalAirHandling = character->getAirHandling() + body->getAirHandling() + wheel->getAirHandling() + glider->getAirHandling();

    if(input.getCustomAirHandling() == 1){

      secondOperand = gAverageAirHandling;

    }
    else if(input.getCustomAirHandling() == 2){

      secondOperand = input.getTargetTotalAirHandling();

    }


  }


  if(input.getSignTotalAirHandling() == 1){

    if(totalAirHandling != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalAirHandling() == 2){

    if(!(totalAirHandling < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAirHandling() == 3){

    if(!(totalAirHandling > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAirHandling() == 4){

    if(!(totalAirHandling <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAirHandling() == 5){

    if(!(totalAirHandling >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalAirHandling() == 6){



  }
  ////////////////////////////////////////////

  if(input.getSignTotalAGHandling() != 6){

    totalAGHandling = character->getAGHandling() + body->getAGHandling() + wheel->getAGHandling() + glider->getAGHandling();

    if(input.getCustomAGHandling() == 1){

      secondOperand = gAverageGravHandling;

    }
    else if(input.getCustomAGHandling() == 2){

      secondOperand = input.getTargetTotalAGHandling();

    }


  }


  if(input.getSignTotalAGHandling() == 1){

    if(totalAGHandling != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalAGHandling() == 2){

    if(!(totalAGHandling < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAGHandling() == 3){

    if(!(totalAGHandling > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAGHandling() == 4){

    if(!(totalAGHandling <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalAGHandling() == 5){

    if(!(totalAGHandling >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalAGHandling() == 6){



  }
  ///////////////////////////////////////

  if(input.getSignTotalTraction() != 6){

    totalTraction = character->getTraction() + body->getTraction() + wheel->getTraction() + glider->getTraction();

    if(input.getCustomTraction() == 1){

      secondOperand = gAverageTraction;

    }
    else if(input.getCustomTraction() == 2){

      secondOperand = input.getTargetTotalTraction();

    }


  }


  if(input.getSignTotalTraction() == 1){

    if(totalTraction != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalTraction() == 2){

    if(!(totalTraction < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalTraction() == 3){

    if(!(totalTraction > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalTraction() == 4){

    if(!(totalTraction <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalTraction() == 5){

    if(!(totalTraction >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalTraction() == 6){



  }
  /////////////////////////////////////////////////////

  if(input.getSignTotalMiniTurbo() != 6){

    totalMiniTurbo = character->getMiniTurbo() + body->getMiniTurbo() + wheel->getMiniTurbo() + glider->getMiniTurbo();

    if(input.getCustomMiniTurbo() == 1){

      secondOperand = gAverageMiniTurbo;

    }
    else if(input.getCustomMiniTurbo() == 2){

      secondOperand = input.getTargetTotalMiniTurbo();

    }


  }


  if(input.getSignTotalMiniTurbo() == 1){

    if(totalMiniTurbo != secondOperand){

      return false;

    }

  }
  else if(input.getSignTotalMiniTurbo() == 2){

    if(!(totalMiniTurbo < secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalMiniTurbo() == 3){

    if(!(totalMiniTurbo > secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalMiniTurbo() == 4){

    if(!(totalMiniTurbo <= secondOperand)){

      return false;

    }

  }
  else if(input.getSignTotalMiniTurbo() == 5){

    if(!(totalMiniTurbo >= secondOperand)){

      return false;

    }


  }
  else if(input.getSignTotalMiniTurbo() == 6){



  }

  return true;
}
