Race::Race(){
  const int TRACK_LENGTH = 15;
  const static int NUM_HORSES = 5;

  Horse horses[NUM_HORSES];
  for(int i = 0; i < NUM_HORSES; i++){
    horses[i].init(i, TRACK_LENGTH);
  }
}



