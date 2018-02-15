CC=g++
CFLAGS=-std=c++11

all: Stack Calc
	$(CC) $(CFLAGS) Queue.o Calc.o -o StoreSimulator

Queue: Queue.cpp
	$(CC) $(CFLAGS) -c Queue.cpp

Calc: Calc.cpp
	$(CC) $(CFLAGS) -c Calc.cpp

clean:
	rm *.o Calc
