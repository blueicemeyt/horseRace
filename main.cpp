#include <iostream>
#include "horse.h"
#include <ctime>
#include "race.h"

int main(){
  srand(time(NULL));

  Race race;
  race.start();

  return 0;
}


