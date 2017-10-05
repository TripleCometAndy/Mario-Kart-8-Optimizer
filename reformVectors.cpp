#include "mk8.h"

bool isRepeat(vector<part *> parts, string name){

  part ** p = parts.data();
  int numParts = parts.size();

  for(int i = 0; i < numParts; i++){

    if((*p)->getType().compare(name) == 0){

      return true;

    }

    p++;
  }
  return false;
}


void reformVectors(vector<part *> * characters, vector<part *> * bodies, vector<part *> * wheels, vector<part *> * gliders, vector<build *> builds){

  vector<part *> tempChar;
  vector<part *> tempBod;
  vector<part *> tempWhe;
  vector<part *> tempGli;

  int charTotal = characters->size();
  int bodTotal = bodies->size();
  int wheelTotal = wheels->size();
  int gliderTotal = gliders->size();
  int numBuilds = builds.size();


  for(int i = 0; i < charTotal; i++){

      tempChar.push_back((*characters)[i]);

  }

  for(int i = 0; i < bodTotal; i++){

      tempBod.push_back((*bodies)[i]);

  }

  for(int i = 0; i < wheelTotal; i++){

      tempWhe.push_back((*wheels)[i]);

  }

  for(int i = 0; i < gliderTotal; i++){

      tempGli.push_back((*gliders)[i]);

  }

  characters->clear();
  bodies->clear();
  wheels->clear();
  gliders->clear();

  part ** p = tempChar.data();
  build ** q = builds.data();


  for(int i = 0; i < charTotal; i++){

    for(int j = 0; j < numBuilds; j++){

        if((*p)->getType().compare((*q)->getCharacter()->getType()) == 0){

          if(!isRepeat(*characters, (*p)->getType())){

            characters->push_back(*p);

          }


        }
        q++;
    }
    p++;
    q = builds.data();

  }

  p = tempBod.data();
  q = builds.data();

  for(int i = 0; i < bodTotal; i++){

    for(int j = 0; j < numBuilds; j++){

        if((*p)->getType().compare((*q)->getBody()->getType()) == 0){

          if(!isRepeat(*bodies, (*p)->getType())){

            bodies->push_back(*p);

          }


        }
        q++;
    }
    p++;
    q = builds.data();

  }

  p = tempWhe.data();
  q = builds.data();

  for(int i = 0; i < wheelTotal; i++){

    for(int j = 0; j < numBuilds; j++){

        if((*p)->getType().compare((*q)->getWheels()->getType()) == 0){

          if(!isRepeat(*wheels, (*p)->getType())){

            wheels->push_back(*p);

          }


        }
        q++;
    }
    p++;
    q = builds.data();

  }

  p = tempGli.data();
  q = builds.data();

  for(int i = 0; i < gliderTotal; i++){

    for(int j = 0; j < numBuilds; j++){

        if((*p)->getType().compare((*q)->getGlider()->getType()) == 0){

          if(!isRepeat(*gliders, (*p)->getType())){

            gliders->push_back(*p);

          }


        }
        q++;
    }
    p++;
    q = builds.data();

  }

}

void reformBuilds(vector<build *> * builds, vector<build *> * prevBuilds){

  int numBuilds = builds->size();

  prevBuilds->clear();

  for(int i = 0; i < numBuilds; i++){

    prevBuilds->push_back((*builds)[i]);


  }

  builds->clear();


}
