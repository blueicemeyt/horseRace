#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race{
public:
  Race();
  void start();

private:
  int NUM_HORSES;
  int TRACK_LENGTH;
  Horse horses[5];
};

#endif
