horseRace: horse.o main.o
	g++ -g horse.o main.o -o horseRace

horse.o: horse.h horse.cpp
	g++ -g -c horse.cpp

clean:
	rm horseRace
	rm *.o

run: horseRace
	./horseRace



