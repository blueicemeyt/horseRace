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

int coin = rand() % 2;
if (coin == 0){
  position++;

