class Horse{
private:
  int position;
  int index;
  int trackLength;

public:
  Horse();
  void init(int index, int trackLength);
  void advance();
  void printLane();
  bool isWinner();
};

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
      cout << ".";
    }
    else{
      cout << ".";
    }
  }
  cout << endl;
}

bool Horse::isWinner(){
  bool win = false;
  if (position >= trackLength{
    win = true;
    cout << "Horse " << index << " wins!" << endl;
  }
  return win;
}



// Race class

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
  const int NUM_HORSES = 5;

  Horse horses[NUM_HORSES];
  for(int i = 0; i < NUM_HORSES; i++){
    horses[i].init(i, TRACK_LENGTH);





