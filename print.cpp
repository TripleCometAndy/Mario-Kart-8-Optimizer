#include "mk8.h"

void printBuilds(vector<build *> builds){

  int numBuilds = builds.size();
  build ** p = builds.data();

  for(int i = 0; i < numBuilds; i++){

    cout << "Build " << i + 1 << ": " << (*p)->getCharacter()->getType() << ", " << (*p)->getBody()->getType() << ", " << (*p)->getWheels()->getType() << ", ";
    cout << (*p)->getGlider()->getType() << endl;

    p++;


  }


}
