#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race{
public:
  Race();
  void start();

private:
  int NUM_HORSES;
  int TRACK_LENGTH;
  Horse horses[5]
};

Race::Race(){
  const int TRACK_LENGTH = 15;
  const static int NUM_HORSES = 5;

  Horse horses[NUM_HORSES];
  for(int i = 0; i < NUM_HORSES; i++){
    horses[i].init(i, TRACK_LENGTH);
  }
}

#endif
