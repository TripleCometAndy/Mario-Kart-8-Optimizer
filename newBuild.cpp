#include "mk8.h"

bool prevBuild(part * cha, part * bod, part * whe, part * gli, vector<build *> prevBuilds){


  int numBuilds = prevBuilds.size();
  build ** p = prevBuilds.data();

  for(int i = 0; i < numBuilds; i++){

    if((*p)->getCharacter()->getType().compare(cha->getType()) == 0){

        if((*p)->getBody()->getType().compare(bod->getType()) == 0){

          if((*p)->getWheels()->getType().compare(whe->getType()) == 0){

            if((*p)->getGlider()->getType().compare(gli->getType()) == 0){

              return true;
            }

          }


        }


    }
    p++;

  }
  return false;

}


void newBuild(vector<build *> * builds, part * cha, part * bod, part * whe, part * gli, vector<build *> prevBuilds){


  if(prevBuild(cha, bod, whe, gli, prevBuilds)){

    build * newBuild = new build(cha, bod, whe, gli);

    builds->push_back(newBuild);

  }

}

void newBuildAll(vector<build *> * builds, part * cha, part * bod, part * whe, part * gli){

  build * newBuild = new build(cha, bod, whe, gli);

  builds->push_back(newBuild);


}

void allBuilds(vector<build *> * allBuilds, vector<part *> characters, vector<part *> bodies, vector<part *> wheels, vector<part *> gliders){

  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  for(int i = 0; i < charactersTotal; i++){

    for(int j = 0; j < bodiesTotal; j++){

      for(int k = 0; k < wheelsTotal; k++){

        for(int m = 0; m < glidersTotal; m++){


            newBuildAll(allBuilds, *p, *q, *r, *s);

            s++;

        }
        r++;
        s = gliders.data();


      }
      q++;
      r = wheels.data();
    }
    p++;
    q = bodies.data();

  }


}
