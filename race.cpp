#include <iostream>
#include <cstdlib>
#include <ctime>
#include "race.h"

Race::Race(){
  NUM_HORSES = 5;
  TRACK_LENGTH = 15;

  for(int i = 0; i < NUM_HORSES; i++){
    horses[i].init(i, TRACK_LENGTH);
  }
}

void Race::start(){
  bool winner = false;

  while(winner == false){
  
    for(int i = 0; i < NUM_HORSES; i++){
      horses[i].advance();
      horses[i].printLane();

      if(horses[i].isWinner()){
        winner = true;
      }
    }

    if(winner == false){
      std::cout << "Press ENTER for another turn" << std::endl;
      std::cin.get();
    }
  }
}



