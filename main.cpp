#include "mk8.h"


int main(){

  part lightCharacterXS("Light Character XS", 2.25,	2.5,	2.75,	2,	4,	2,	5,	4.5,	5,	5,	4.25,	4);
  part lightCharacterS("Light Character S", 2.25,	2.5,	2.75,	2,	4.25,	2,	4.75,	4.25,	4.75,	4.75,	3.75,	4);
  part lightCharacterM("Light Character M", 2.5,	2.75,	3,	2.25,	4.25,	2.25,	4.5,	4,	4.5,	4.5,	4,	3.75);
  part lightCharacterL("Light Character L", 2.75,	3,	3.25,	2.5,	4,	2.5,	4.5,	4,	4.5,	4.5,	4.25,	3.75);
  part lightCharacterXL("Light Character XL", 2.75,	3,	3.25,	2.5,	4.25,	2.5,	4.25,	3.75,	4.25,	4.25,	3.5,	3.75);
  part lightCharacterXXL("Light Character XXL", 3,	3.25,	3.5,	2.75,	4,	2.75,	4.25,	3.75,	4.25,	4.25,	4,	3.5);
  part mediumCharacterS("Medium Character S", 3.25,	3.5,	3.75,	3,	4,	2.75,	4,	3.5,	4,	4,	3.75,	3.5);
  part mediumCharacterM("Medium Character M", 3.5,	3.75,	4,	3.25,	3.75,	3,	3.75,	3.25,	3.75,	3.75,	3.75,	3.5);
  part mediumCharacterL("Medium Character L", 3.5,	3.75,	4,	3.25,	3.75,	3.25,	3.75,	3.25,	3.75,	3.75,	3.25,	3.5);
  part mediumCharacterXL("Medium Character XL", 3.75,	4,	4.25,	3.5,	3.5,	3.5,	3.75,	3.25,	3.75,	3.75,	3.25,	3.25);
  part mediumCharacterXXL("Medium Character XXL", 3.75,	4,	4.25,	3.5,	3.5,	3.5,	3.5,	3,	3.5,	3.5,	3.5,	3.25);
  part heavyCharacterS("Heavy Character S", 4,	4.25,	4.5,	3.75,	3.25,	3.75,	3.25,	2.75,	3.25,	3.25,	3.75,	3.25);
  part heavyCharacterM("Heavy Character M", 4.5,	4.75,	5,	4.25,	3.25,	4,	3,	2.5,	3,	3,	3,	3);
  part heavyCharacterL("Heavy Character L", 4.75,	5,	5.25,	4.5,	3,	4.25,	2.75,	2.25,	2.75,	2.75,	3.25,	2.75);
  part heavyCharacterXL("Heavy Character XL", 4.25,	4.5,	4.75,	4,	3.25,	4.5,	3.25,	2.75,	3.25,	3.25,	3.25,	3);
  part heavyCharacterXXL("Heavy Character XXL", 4.75,	5,	5.25,	4.5,	3,	4.5,	2.5,	2,	2.5,	2.5,	3,	2.75);


  part kartStandard("Kart Standard", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  part kartPipe("Kart Pipe", -0.5, 0, -0.5, -0.5, 0.5, -0.25, 0.5, 0.5, -0.25, 0.25, 0.25, 0.5);
  part kartMach("Kart Mach", 0, 0, 0.25, 0.5, -0.25, 0.25, -0.25, 0, -0.25, 0.25, 0.25, 0);
  part kartSteel("Kart Steel", 0.25, 0.5, -0.75, -0.25, -0.75, -0.5, -0.5, 0.75, -0.5, -0.5, 0, -0.5);
  part kartKitty("Kart Kitty", -0.25, -0.25, 0.25, 0, 0.25, 0, 0.25, 0, 0.25, 0, 0, 0.25);
  part kartCircuit("Kart Circuit", 0.5, -0.5, -0.25, 0.25, -0.75, 0.25, -0.5, -0.25, -0.75, -0.25, -0.5, -0.75);
  part kartTri("Kart Tri", 0.25, 0.5, -0.75, -0.25, -0.75, 0.5, -0.5, 0.75, -0.5, -0.5, 0, -0.5);
  part kartBadwagon("Kart Badwagon", 0.5, -0.25, -0.5, 0, -1, 0.5, -0.75, -0.25, -0.75, -0.5, 0.5, -1);
  part kartPrancer("Kart Prancer", 0.25, 0, 0, 0, -0.5, -0.25, 0, 0.25, 0, -0.25, -0.25, -0.25);
  part kartBiddy("Kart Biddy", -0.75, -0.5, -0.5, -0.25, 0.75, -0.5, 0.5, 0.5, 0.25, 0.5, 0.25, 0.75);
  part kartShip("Kart Ship", -0.5, 0.5, -0.25, -0.75, 0.5, -0.5, 0.25, 0.75, 0, -0.25, 0.75, 0.5);
  part kartSneeker("Kart Sneeker", 0.25, -0.25, 0, 0, -0.5, 0, 0, 0, -0.25, 0, -0.75, -0.25);
  part kartCoupe("Kart Coupe", 0, 0, 0.25, 0.5, -0.25, 0.25, -0.25, 0, -0.25, 0.25, 0.25, 0);
  part kartGold("Kart Gold", 0.25, -0.25, 0, 0, -0.5, 0, 0, 0, -0.25, 0, -0.75, -0.25);
  part kartGLA("Kart GLA", 0.5, -0.25, -0.5, 0, -1, 0.5, -0.75, -0.25, -0.75, -0.5, 0.5, -1);
  part kartArrow("Kart Arrow", -0.25, -0.25, 0, 0.25, 0.25, -0.25, 0.25, 0.25, 0, 0.25, 0.5, 0.25);
  part kartRoadster("Kart Roadster", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  part kartFalcon("Kart Falcon", 0.25, -0.25, 0, 0.25, -0.25, -0.5, -0.25, 0.25, -0.5, 0.5, 0, -0.25);
  part kartTanooki("Kart Tanooki", -0.25	,0.25,	0,	0,	-0.5,	0.25,	0.25,	0.5,	0,	0,	1,	-0.25);
  part kartDasher("Kart Dasher", 0.5,	-0.5,	-0.25,	0.25,	-0.75,	0.25,	-0.5,	-0.25,	-0.75,	-0.25,	-0.5,	-0.75);
  part kartStreetle("Kart Streetle", -0.5,	0.5,	-0.25,	-0.75,	0.5,	-0.5,	0.25,	0.75,	0,	-0.25,	0.75,	0.5);
  part kartPWING("Kart PWING", 0.5,	-0.5,	-0.25,	0.25,	-0.75,	0.25,	-0.5,	-0.25,	-0.75,	-0.25,	-0.5,	-0.75);
  part kartClown("Kart Clown", -0.25,	0.25,	0,	0,	-0.5,	0.25,	0.25,	0.5,	0,	0,	1,	-0.25);


  part wheelStandard("Wheel Standard", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  part wheelMonster("Wheel Monster", 0,	-0.25,	-0.5,	0,	-0.5,	0.5,	-0.75,	-0.5,	-0.5,	-0.75,	0.5,	-0.25);
  part wheelRoller("Wheel Roller", -0.5,	0,	0,	-0.5,	0.5,	-0.5,	0.25,	0.25,	0.25,	0.25,	-0.25,	0.75);
  part wheelSlim("Wheel Slim", 0.25,	-0.25,	-0.25,	0.5,	-0.5,	0,	0.25,	0.25,	0.25,	0,	-1,	-0.25);
  part wheelSlick("Wheel Slick", 0.5,	-0.75,	-0.75,	0.5,	-0.75,	0.25,	-0.25,	-0.75,	-0.5,	-0.25,	-1.25,	-0.75);
  part wheelMetal("Wheel Metal", 0.5,	0,	-0.25,	-0.25,	-1,	0.5,	-0.25,	-0.25,	-0.75,	-0.5,	-0.75,	-0.75);
  part wheelButton("Wheel Button", -0.25,	-0.25,	-0.25,	0,	0.25,	-0.5,	0,	0,	-0.25,	0.25,	-0.5,	0.5);
  part wheelOffroad("Wheel Offroad", 0.25,	0.25,	-0.5,	0,	-0.25,	0.25,	-0.5,	-0.5,	-0.5,	-0.25,	0.25,	-0.5);
  part wheelSponge("Wheel Sponge", -0.25,	-0.5,	0.25,	-0.25,	0,	-0.25,	-0.25,	-0.5,	0,	0,	0.25,	0.25);
  part wheelWood("Wheel Wood", 0.25,	-0.25,	-0.25,	0.5,	-0.5,	0,	0.25,	0.25,	0.25,	0,	-1,	-0.25);
  part wheelCushion("Wheel Cushion", -0.25,	-0.5,	0.25,	-0.25,	0,	-0.25,	-0.25,	-0.5,	0,	-0.25,	0.25,	0.25);
  part wheelBlueStandard("Wheel BlueStandard", 0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0);
  part wheelHotMonster("Wheel HotMonster", 0,	-0.25,	-0.5,	0,	-0.5,	0.5,	-0.75,	-0.5,	-0.5,	-0.75,	0.5,	-0.25);
  part wheelAzure("Wheel Azure", -0.5,	0,	0,	-0.5,	0.5,	-0.5,	0.25,	0.25,	0.25,	0.25,	-0.25,	0.75);
  part wheelCrimson("Wheel Crimson", 0.25,	-0.25,	-0.25,	0.5,	-0.5,	0,	0.25,	0.25,	0.25,	0,	-1,	-0.25);
  part wheelCyber("Wheel Cyber", 0.5,	-0.75,	-0.75,	0.5,	-0.75,	0.25,	-0.25,	-0.75,	-0.5,	-0.25,	-1.25,	-0.75);
  part wheelRetro("Wheel Retro", 0.25,	0.25,	-0.5,	0,	-0.25,	0.25,	-0.5,	-0.5,	-0.25,	-0.25,	0.25,	-0.5);
  part wheelGold("Wheel Gold", 0.5,	0,	-0.25,	-0.25,	-1,	0.5,	-0.25,	-0.25,	-0.75,	-0.5,	-0.75,	-0.75);
  part wheelGLA("Wheel GLA", 0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0);
  part wheelTriforce("Wheel Triforce", 0.25,	0.25,	-0.5,	0,	-0.25,	0.25,	-0.5,	-0.5,	-0.25,	-0.25,	0.25,	-0.5);
  part wheelLeaf("Wheel Leaf", 0.25,	0.25,	-0.5,	0,	-0.25,	0.25,	-0.5,	-0.5,	-0.25,	-0.25,	0.25,	-0.5);


  part gliderSuper("Glider Super", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  part gliderCloud("Glider Cloud", -0.25,	0,	-0.25,	0.25,	0.25,	-0.25,	0,	0,	0.25,	0,	0,	0.25);
  part gliderWario("Glider Wario", 0,	-0.25,	0,	0.25,	0,	0.25,	0,	0.25,	0,	-0.25,	-0.25,	0);
  part gliderWaddle("Glider Waddle", 0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0);
  part gliderParasol("Glider Parasol", -0.25,	-0.25,	-0.25,	0.25,	0.25,	0,	0,	0.25,	0.25,	-0.25,	-0.25,	0.25);
  part gliderParachute("Glider Parachute", -0.25,	0,	-0.25,	0.25,	0.25,	-0.25,	0,	0,	0.25,	0,	0,	0.25);
  part gliderParafoil("Glider Parafoil", -0.25,	-0.25,	-0.25,	0.25,	0.25,	0,	0,	0.25,	0.25,	-0.25,	-0.25,	0.25);
  part gliderFlower("Glider Flower", -0.25,	0,	-0.25,	0.25,	0.25,	-0.25,	0,	0,	0.25,	0,	0,	0.25);
  part gliderBowser("Glider Bowser", -0.25,	-0.25,	-0.25,	0.25,	0.25,	0,	0,	0.25,	0.25,	-0.25,	-0.25,	0.25);
  part gliderPlane("Glider Plane", 0,	-0.25,	0,	0.25,	0,	0.25,	0	,0.25,	0,	-0.25,	-0.25,	0);
  part gliderTV("Glider TV", -0.25,	-0.25,	-0.25,	0.25,	0.25,	0,	0,	0.25,	0.25,	-0.25,	-0.25,	0.25);
  part gliderGold("Glider Gold", 0,	-0.25,	0,	0.25,	0	,0.25,	0,	0.25,	0,	-0.25,	-0.25,	0);
  part gliderHylian("Glider Hylian", 0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0);
  part gliderPaper("Glider Paper", -0.25,	0,	-0.25,	0.25,	0.25,	-0.25,	0,	0,	0.25,	0,	0,	0.25);

  vector<part *> characters;
  vector<part *> bodies;
  vector<part *> wheels;
  vector<part *> gliders;

  vector<build *> builds;

  vector<build *> prevBuilds;

  characters.push_back(&lightCharacterXS);
  characters.push_back(&lightCharacterS);
  characters.push_back(&lightCharacterM);
  characters.push_back(&lightCharacterL);
  characters.push_back(&lightCharacterXL);
  characters.push_back(&lightCharacterXXL);
  characters.push_back(&mediumCharacterS);
  characters.push_back(&mediumCharacterM);
  characters.push_back(&mediumCharacterL);
  characters.push_back(&mediumCharacterXL);
  characters.push_back(&mediumCharacterXXL);
  characters.push_back(&heavyCharacterS);
  characters.push_back(&heavyCharacterM);
  characters.push_back(&heavyCharacterL);
  characters.push_back(&heavyCharacterXL);
  characters.push_back(&heavyCharacterXXL);


  bodies.push_back(&kartStandard);
  bodies.push_back(&kartPipe);
  bodies.push_back(&kartMach);
  bodies.push_back(&kartSteel);
  bodies.push_back(&kartKitty);
  bodies.push_back(&kartCircuit);
  bodies.push_back(&kartTri);
  bodies.push_back(&kartBadwagon);
  bodies.push_back(&kartPrancer);
  bodies.push_back(&kartBiddy);
  bodies.push_back(&kartShip);
  bodies.push_back(&kartSneeker);
  bodies.push_back(&kartCoupe);
  bodies.push_back(&kartGold);
  bodies.push_back(&kartGLA);
  bodies.push_back(&kartArrow);
  bodies.push_back(&kartRoadster);
  bodies.push_back(&kartFalcon);
  bodies.push_back(&kartTanooki);
  bodies.push_back(&kartDasher);
  bodies.push_back(&kartStreetle);
  bodies.push_back(&kartPWING);
  bodies.push_back(&kartClown);


  wheels.push_back(&wheelStandard);
  wheels.push_back(&wheelMonster);
  wheels.push_back(&wheelRoller);
  wheels.push_back(&wheelSlim);
  wheels.push_back(&wheelSlick);
  wheels.push_back(&wheelMetal);
  wheels.push_back(&wheelButton);
  wheels.push_back(&wheelOffroad);
  wheels.push_back(&wheelSponge);
  wheels.push_back(&wheelWood);
  wheels.push_back(&wheelCushion);
  wheels.push_back(&wheelBlueStandard);
  wheels.push_back(&wheelHotMonster);
  wheels.push_back(&wheelAzure);
  wheels.push_back(&wheelCrimson);
  wheels.push_back(&wheelCyber);
  wheels.push_back(&wheelRetro);
  wheels.push_back(&wheelGold);
  wheels.push_back(&wheelGLA);
  wheels.push_back(&wheelTriforce);
  wheels.push_back(&wheelLeaf);


  gliders.push_back(&gliderSuper);
  gliders.push_back(&gliderCloud);
  gliders.push_back(&gliderWario);
  gliders.push_back(&gliderWaddle);
  gliders.push_back(&gliderParasol);
  gliders.push_back(&gliderParachute);
  gliders.push_back(&gliderParafoil);
  gliders.push_back(&gliderFlower);
  gliders.push_back(&gliderBowser);
  gliders.push_back(&gliderPlane);
  gliders.push_back(&gliderTV);
  gliders.push_back(&gliderGold);
  gliders.push_back(&gliderHylian);
  gliders.push_back(&gliderPaper);


  float total = 882;
  float gAverageGroundSpeed = 0;
  float gAverageWaterSpeed = 0;
  float gAverageAirSpeed = 0;
  float gAverageGravSpeed = 0;
  float gAverageAccel = 0;
  float gAverageWeight = 0;
  float gAverageGroundHandling = 0;
  float gAverageWaterHandling = 0;
  float gAverageAirHandling = 0;
  float gAverageGravHandling = 0;
  float gAverageTraction = 0;
  float gAverageMiniTurbo = 0;
  bool quit = false;


  part ** p = characters.data();
  part ** q = bodies.data();
  part ** r = wheels.data();
  part ** s = gliders.data();

  int charactersTotal = characters.size();
  int bodiesTotal = bodies.size();
  int wheelsTotal = wheels.size();
  int glidersTotal = gliders.size();

  userInput input;

  input.getUserInput(&quit);

  allBuilds(&prevBuilds, characters, bodies, wheels, gliders);
  gAverageGroundSpeed = averageGroundSpeed(characters, bodies, wheels, gliders, prevBuilds);
  gAverageWaterSpeed = averageWaterSpeed(characters, bodies, wheels, gliders, prevBuilds);
  gAverageAirSpeed = averageAirSpeed(characters, bodies, wheels, gliders, prevBuilds);
  gAverageGravSpeed = averageAGSpeed(characters, bodies, wheels, gliders, prevBuilds);
  gAverageAccel = averageAcceleration(characters, bodies, wheels, gliders, prevBuilds);
  gAverageWeight = averageWeight(characters, bodies, wheels, gliders, prevBuilds);
  gAverageGroundHandling = averageGroundHandling(characters, bodies, wheels, gliders, prevBuilds);
  gAverageWaterHandling = averageWaterHandling(characters, bodies, wheels, gliders, prevBuilds);
  gAverageAirHandling = averageAirHandling(characters, bodies, wheels, gliders, prevBuilds);
  gAverageGravHandling = averageAGHandling(characters, bodies, wheels, gliders, prevBuilds);
  gAverageTraction = averageTraction(characters, bodies, wheels, gliders, prevBuilds);
  gAverageMiniTurbo = averageMiniTurbo(characters, bodies, wheels, gliders, prevBuilds);
  while(!quit){

    p = characters.data();
    q = bodies.data();
    r = wheels.data();
    s = gliders.data();

    charactersTotal = characters.size();
    bodiesTotal = bodies.size();
    wheelsTotal = wheels.size();
    glidersTotal = gliders.size();

    //gAverageGroundSpeed = averageGroundSpeed(characters, bodies, wheels, gliders, builds);


    for(int i = 0; i < charactersTotal; i++){

      for(int j = 0; j < bodiesTotal; j++){

        for(int k = 0; k < wheelsTotal; k++){

          for(int m = 0; m < glidersTotal; m++){



              if(optimize(*p, *q, *r, *s, input, characters, bodies, wheels, gliders, prevBuilds, gAverageGroundSpeed, gAverageWaterSpeed, gAverageAirSpeed, gAverageGravSpeed, gAverageAccel, gAverageWeight, gAverageGroundHandling, gAverageWaterHandling, gAverageAirHandling, gAverageGravHandling, gAverageTraction, gAverageMiniTurbo)){

                  newBuild(&builds, *p, *q, *r, *s, prevBuilds);


              }

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
      cout << "(" << i << ")" << " " << endl;
    }
    printBuilds(builds);
    reformVectors(&characters, &bodies, &wheels, &gliders, builds);
    reformBuilds(&builds, &prevBuilds);
    gAverageGroundSpeed = averageGroundSpeed(characters, bodies, wheels, gliders, prevBuilds);
    gAverageWaterSpeed = averageWaterSpeed(characters, bodies, wheels, gliders, prevBuilds);
    gAverageAirSpeed = averageAirSpeed(characters, bodies, wheels, gliders, prevBuilds);
    gAverageGravSpeed = averageAGSpeed(characters, bodies, wheels, gliders, prevBuilds);
    gAverageAccel = averageAcceleration(characters, bodies, wheels, gliders, prevBuilds);
    gAverageWeight = averageWeight(characters, bodies, wheels, gliders, prevBuilds);
    gAverageGroundHandling = averageGroundHandling(characters, bodies, wheels, gliders, prevBuilds);
    gAverageWaterHandling = averageWaterHandling(characters, bodies, wheels, gliders, prevBuilds);
    gAverageAirHandling = averageAirHandling(characters, bodies, wheels, gliders, prevBuilds);
    gAverageGravHandling = averageAGHandling(characters, bodies, wheels, gliders, prevBuilds);
    gAverageTraction = averageTraction(characters, bodies, wheels, gliders, prevBuilds);
    gAverageMiniTurbo = averageMiniTurbo(characters, bodies, wheels, gliders, prevBuilds);

    cout << "Ground Speed: " << gAverageGroundSpeed << endl;
    cout << "Water Speed: " << gAverageWaterSpeed << endl;
    cout << "Air Speed: " << gAverageAirSpeed << endl;
    cout << "Grav Speed: " << gAverageGravSpeed << endl;
    cout << "Acceleration : " << gAverageAccel << endl;
    cout << "Weight: " << gAverageWeight << endl;
    cout << "Ground Handling: " << gAverageGroundHandling << endl;
    cout << "Water Handling: " << gAverageWaterHandling << endl;
    cout << "Air Handling: " << gAverageAirHandling << endl;
    cout << "Grav Handling: " << gAverageGravHandling << endl;
    cout << "Traction: " << gAverageTraction << endl;
    cout << "Mini Turbo: " << gAverageMiniTurbo << endl;
    input.getUserInput(&quit);

  }

  return 0;
}
