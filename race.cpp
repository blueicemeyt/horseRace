#include <iostream>
#include <cstdlib>
#include <ctime>
#include "race.h"

Race::Race(){
  const int TRACK_LENGTH = 15;
  const static int NUM_HORSES = 5;

  Horse horses[NUM_HORSES];
  for(int i = 0; i < NUM_HORSES; i++){
    horses[i].init(i, TRACK_LENGTH);
  }
}

void Race::start(){
  bool winner = false;

  while(winner == false){
    for(int i = 0; i < NUM_HORSES; i++){
      horses[i].advance();
    }
    for(int i = 0; i < NUM_HORSES; i++){
      horses[i].advance();
    }
    for(int i = 0; i < NUM_HORSES; i++){
      horses[i].printLance();
    }
    for(int i = 0; i < NUM_HORSES; i++){
      if(hoses[i].isWinner()){
        std:cout << "Horse  " << i << " WINS!!!" << std.endl;
      }
    }
    if(winner == false){
      std::cout << "Press ENTER for another turn" << std::endl;
      std::cin.get();
    }
  }
}



