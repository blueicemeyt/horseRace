#include <iostream>
#include <cstdlib>
#include "horse.h"

Horse::Horse(){
  position = 0;
  index = 0;
  trackLength = 15;
}

void Horse::init(int i, int length){
  index = i;
  trackLength = length;
  position = 0;
}

void Horse::advance(){
  int coin = rand() % 2;
  if (coin == 1){
    position++;
  }
}

void Horse::printLane(){
  for (int pos = 0; pos <= trackLength; pos++){
    if (position == pos){
      std::cout << index;
    }
    else{
      std::cout << ".";
    }
  }
  std::cout << std::endl;
}

bool Horse::isWinner(){
  bool win = false;
  if (position >= trackLength){
    win = true;
    std::cout << "Horse " << index << " wins!" << std::endl;
  }
  return win;
}

