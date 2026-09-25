#include <iostream>
#include "horse.h"

void testHorse();

int main(){
  std::cout << "Hi." << std::endl;
  testHorse();

  return 0;
}

void testHorse(){
  Horse h;
  h.printLane();
} // end testHorse


