#include "mk8.h"

userInput::userInput(){




}

void userInput::getUserInput(bool * quit){

  int opQuit;

  cout << "(1) Optimize (further)" << endl;
  cout << "(2) Quit" << endl;

  cin >> opQuit;

  if(opQuit == 2){

    *quit = true;
    return;
  }

  cout << "'Ground Speed' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about ground speed" << endl;

  cin >> signTotalGroundSpeed;

  cout << "'Ground Speed' ";

  if(signTotalGroundSpeed == 1){

    cout << "= ";


  }
  else if(signTotalGroundSpeed == 2){

    cout << "< ";


  }
  else if(signTotalGroundSpeed == 3){

    cout << "> ";


  }
  else if(signTotalGroundSpeed == 4){


    cout << "<= ";

  }
  else if(signTotalGroundSpeed == 5){


    cout << ">= ";

  }
  else if(signTotalGroundSpeed == 6){




  }
  if(signTotalGroundSpeed != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average ground speed for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customGroundSpeed;

      if(customGroundSpeed == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalGroundSpeed;

      }


  }

  /////////////////////////////////////////////////////

  cout << "'Water Speed' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about water speed" << endl;

  cin >> signTotalWaterSpeed;

  cout << "'Water Speed' ";

  if(signTotalWaterSpeed == 1){

    cout << "= ";


  }
  else if(signTotalWaterSpeed == 2){

    cout << "< ";


  }
  else if(signTotalWaterSpeed == 3){

    cout << "> ";


  }
  else if(signTotalWaterSpeed == 4){


    cout << "<= ";

  }
  else if(signTotalWaterSpeed == 5){


    cout << ">= ";

  }
  else if(signTotalWaterSpeed == 6){




  }
  if(signTotalWaterSpeed != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average water speed for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customWaterSpeed;

      if(customWaterSpeed == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalWaterSpeed;

      }


  }

/////////////////////////////////////////////////////

  cout << "'Air Speed' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about air speed" << endl;

  cin >> signTotalAirSpeed;

  cout << "'Air Speed' ";

  if(signTotalAirSpeed == 1){

    cout << "= ";


  }
  else if(signTotalAirSpeed == 2){

    cout << "< ";


  }
  else if(signTotalAirSpeed == 3){

    cout << "> ";


  }
  else if(signTotalAirSpeed == 4){


    cout << "<= ";

  }
  else if(signTotalAirSpeed == 5){


    cout << ">= ";

  }
  else if(signTotalAirSpeed == 6){




  }
  if(signTotalAirSpeed != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average air speed for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customAirSpeed;

      if(customAirSpeed == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalAirSpeed;

      }


  }

  //////////////////////////////////////////////////////////

  cout << "'Anti-gravity Speed' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about anti-gravity speed" << endl;

  cin >> signTotalAGSpeed;
  cout << "'Anti-gravity Speed' ";

  if(signTotalAGSpeed == 1){

    cout << "= ";


  }
  else if(signTotalAGSpeed == 2){

    cout << "< ";


  }
  else if(signTotalAGSpeed == 3){

    cout << "> ";


  }
  else if(signTotalAGSpeed == 4){


    cout << "<= ";

  }
  else if(signTotalAGSpeed == 5){


    cout << ">= ";

  }
  else if(signTotalAGSpeed == 6){




  }
  if(signTotalAGSpeed != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average anti-gravity speed for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customAGSpeed;

      if(customAGSpeed == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalAGSpeed;

      }


  }

  ///////////////////////////////////////////////////

  cout << "'Acceleration' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about acceleration" << endl;

  cin >> signTotalAcceleration;
  cout << "'Acceleration' ";

  if(signTotalAcceleration == 1){

    cout << "= ";


  }
  else if(signTotalAcceleration == 2){

    cout << "< ";


  }
  else if(signTotalAcceleration == 3){

    cout << "> ";


  }
  else if(signTotalAcceleration == 4){


    cout << "<= ";

  }
  else if(signTotalAcceleration == 5){


    cout << ">= ";

  }
  else if(signTotalAcceleration == 6){




  }
  if(signTotalAcceleration != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average acceleration for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customAcceleration;

      if(customAcceleration == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalAcceleration;

      }


  }

//////////////////////////////////////////////////////////////////

  cout << "'Weight' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about weight" << endl;

  cin >> signTotalWeight;
  cout << "'Weight' ";

  if(signTotalWeight == 1){

    cout << "= ";


  }
  else if(signTotalWeight == 2){

    cout << "< ";


  }
  else if(signTotalWeight == 3){

    cout << "> ";


  }
  else if(signTotalWeight == 4){


    cout << "<= ";

  }
  else if(signTotalWeight == 5){


    cout << ">= ";

  }
  else if(signTotalWeight == 6){




  }
  if(signTotalWeight != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average weight for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customWeight;

      if(customWeight == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalWeight;

      }


  }
  //////////////////////////////////////////////////////////

  cout << "'Ground Handling' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about ground handling" << endl;

  cin >> signTotalGroundHandling;
  cout << "'Ground Handling' ";

  if(signTotalGroundHandling == 1){

    cout << "= ";


  }
  else if(signTotalGroundHandling == 2){

    cout << "< ";


  }
  else if(signTotalGroundHandling == 3){

    cout << "> ";


  }
  else if(signTotalGroundHandling == 4){


    cout << "<= ";

  }
  else if(signTotalGroundHandling == 5){


    cout << ">= ";

  }
  else if(signTotalGroundHandling == 6){




  }
  if(signTotalGroundHandling != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average ground handling for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customGroundHandling;

      if(customGroundHandling == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalGroundHandling;

      }


  }
  /////////////////////////////////////////////////////////
  cout << "'Water Handling' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about water handling" << endl;

  cin >> signTotalWaterHandling;
  cout << "'Water Handling' ";

  if(signTotalWaterHandling == 1){

    cout << "= ";


  }
  else if(signTotalWaterHandling == 2){

    cout << "< ";


  }
  else if(signTotalWaterHandling == 3){

    cout << "> ";


  }
  else if(signTotalWaterHandling == 4){


    cout << "<= ";

  }
  else if(signTotalWaterHandling == 5){


    cout << ">= ";

  }
  else if(signTotalWaterHandling == 6){




  }
  if(signTotalWaterHandling != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average water handling for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customWaterHandling;

      if(customWaterHandling == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalWaterHandling;

      }


  }
  //////////////////////////////////////////////////
  cout << "'Air Handling' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about air handling" << endl;

  cin >> signTotalAirHandling;
  cout << "'Air Handling' ";

  if(signTotalAirHandling == 1){

    cout << "= ";


  }
  else if(signTotalAirHandling == 2){

    cout << "< ";


  }
  else if(signTotalAirHandling == 3){

    cout << "> ";


  }
  else if(signTotalAirHandling == 4){


    cout << "<= ";

  }
  else if(signTotalAirHandling == 5){


    cout << ">= ";

  }
  else if(signTotalAirHandling == 6){




  }
  if(signTotalAirHandling != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average air handling for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customAirHandling;

      if(customAirHandling == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalAirHandling;

      }


  }
  //////////////////////////////////////////////////////
  cout << "'Anti-gravity Handling' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about anti-gravity handling" << endl;

  cin >> signTotalAGHandling;
  cout << "'Anti-gravity Handling' ";

  if(signTotalAGHandling == 1){

    cout << "= ";


  }
  else if(signTotalAGHandling == 2){

    cout << "< ";


  }
  else if(signTotalAGHandling == 3){

    cout << "> ";


  }
  else if(signTotalAGHandling == 4){


    cout << "<= ";

  }
  else if(signTotalAGHandling == 5){


    cout << ">= ";

  }
  else if(signTotalAGHandling == 6){




  }
  if(signTotalAGHandling != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average anti-gravity handling for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customAGHandling;

      if(customAGHandling == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalAGHandling;

      }


  }
  /////////////////////////////////////////////////////////////
  cout << "'Traction' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about traction" << endl;

  cin >> signTotalTraction;
  cout << "'Traction' ";

  if(signTotalTraction == 1){

    cout << "= ";


  }
  else if(signTotalTraction == 2){

    cout << "< ";


  }
  else if(signTotalTraction == 3){

    cout << "> ";


  }
  else if(signTotalTraction == 4){


    cout << "<= ";

  }
  else if(signTotalTraction == 5){


    cout << ">= ";

  }
  else if(signTotalTraction == 6){




  }
  if(signTotalTraction != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average traction for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customTraction;

      if(customTraction == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalTraction;

      }


  }
  /////////////////////////////////////////////////
  cout << "'Mini Turbo' ____ X" << endl;
  cout << "What should go in the blank? (____)" << endl;
  cout << "(1) '='" << endl;
  cout << "(2) '<'" << endl;
  cout << "(3) '>'" << endl;
  cout << "(4) '<='" << endl;
  cout << "(5) '>='" << endl;
  cout << "(6) I don't care about mini turbo" << endl;

  cin >> signTotalMiniTurbo;
  cout << "'Mini Turbo' ";

  if(signTotalMiniTurbo == 1){

    cout << "= ";


  }
  else if(signTotalMiniTurbo == 2){

    cout << "< ";


  }
  else if(signTotalMiniTurbo == 3){

    cout << "> ";


  }
  else if(signTotalMiniTurbo == 4){


    cout << "<= ";

  }
  else if(signTotalMiniTurbo == 5){


    cout << ">= ";

  }
  else if(signTotalMiniTurbo == 6){




  }
  if(signTotalMiniTurbo != 6){

      cout << "X" << endl;
      cout << "Would you like 'X' to be:";
      cout << "(1) The average mini turbo for the current builds" << endl;
      cout << "(2) A custom value" << endl;

      cin >> customMiniTurbo;

      if(customMiniTurbo == 2){

        cout << "What value would you like 'X' to equal?" << endl;

        cin >> targetTotalMiniTurbo;

      }


  }

}

int userInput::getSignTotalGroundSpeed(){

  return signTotalGroundSpeed;
}

int userInput::getSignTotalWaterSpeed(){

  return signTotalWaterSpeed;

}

int userInput::getSignTotalAirSpeed(){

  return signTotalAirSpeed;

}

int userInput::getSignTotalAGSpeed(){

  return signTotalAGSpeed;

}

int userInput::getSignTotalAcceleration(){

  return signTotalAcceleration;

}

int userInput::getSignTotalWeight(){

  return signTotalWeight;

}

int userInput::getSignTotalGroundHandling(){

  return signTotalGroundHandling;
}

int userInput::getSignTotalWaterHandling(){

  return signTotalWaterHandling;
}

int userInput::getSignTotalAirHandling(){

  return signTotalAirHandling;

}

int userInput::getSignTotalAGHandling(){

  return signTotalAGHandling;

}

int userInput::getSignTotalTraction(){

  return signTotalTraction;
}

int userInput::getSignTotalMiniTurbo(){

  return signTotalMiniTurbo;
}

float userInput::getTargetTotalGroundSpeed(){

  return targetTotalGroundSpeed;
}

float userInput::getTargetTotalWaterSpeed(){

  return targetTotalWaterSpeed;
}

float userInput::getTargetTotalAirSpeed(){

  return targetTotalAirSpeed;

}

float userInput::getTargetTotalAGSpeed(){

  return targetTotalAGSpeed;

}

float userInput::getTargetTotalAcceleration(){

  return targetTotalAcceleration;

}

float userInput::getTargetTotalWeight(){

  return targetTotalWeight;
}

float userInput::getTargetTotalGroundHandling(){

  return targetTotalGroundHandling;
}

float userInput::getTargetTotalWaterHandling(){

  return targetTotalWaterHandling;
}

float userInput::getTargetTotalAirHandling(){

  return targetTotalAirHandling;
}

float userInput::getTargetTotalAGHandling(){

  return targetTotalAGHandling;

}

float userInput::getTargetTotalTraction(){

  return targetTotalTraction;
}

float userInput::getTargetTotalMiniTurbo(){

  return targetTotalMiniTurbo;
}

int userInput::getCustomGroundSpeed(){

  return customGroundSpeed;
}

int userInput::getCustomWaterSpeed(){

  return customWaterSpeed;
}

int userInput::getCustomAirSpeed(){

  return customAirSpeed;

}

int userInput::getCustomAGSpeed(){

  return customAGSpeed;
}

int userInput::getCustomAcceleration(){

  return customAcceleration;
}

int userInput::getCustomWeight(){

  return customWeight;
}

int userInput::getCustomGroundHandling(){

  return customGroundHandling;
}

int userInput::getCustomWaterHandling(){

  return customWaterHandling;
}

int userInput::getCustomAirHandling(){

  return customAirHandling;
}

int userInput::getCustomAGHandling(){

  return customAGHandling;
}

int userInput::getCustomTraction(){

  return customTraction;
}

int userInput::getCustomMiniTurbo(){

  return customMiniTurbo;
}
