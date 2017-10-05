#include "mk8.h"

float averageGroundSpeed(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;



  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  float total = 0;

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalGroundSpeed();

  }


  return average/prevBuildsTotal;

}

float averageWaterSpeed(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalWaterSpeed();

  }


  return average/prevBuildsTotal;

}

float averageAirSpeed(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalAirSpeed();

  }


  return average/prevBuildsTotal;

}

float averageAGSpeed(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalAGSpeed();

  }


  return average/prevBuildsTotal;

}

float averageAcceleration(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalAcceleration();

  }


  return average/prevBuildsTotal;

}

float averageWeight(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalWeight();

  }


  return average/prevBuildsTotal;

}

float averageGroundHandling(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalGroundHandling();

  }


  return average/prevBuildsTotal;

}

float averageWaterHandling(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalWaterHandling();

  }


  return average/prevBuildsTotal;

}

float averageAirHandling(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalAirHandling();

  }


  return average/prevBuildsTotal;

}

float averageAGHandling(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalAGHandling();

  }


  return average/prevBuildsTotal;

}

float averageTraction(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalTraction();

  }


  return average/prevBuildsTotal;

}

float averageMiniTurbo(vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders, vector<build *> prevBuilds){

  float average = 0;

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  int prevBuildsTotal = prevBuilds.size();
  cout << "PrevBuilds Size: " << prevBuildsTotal << endl;
  for(int i = 0; i < prevBuildsTotal; i++){

    average += prevBuilds[i]->getTotalMiniTurbo();

  }


  return average/prevBuildsTotal;

}
