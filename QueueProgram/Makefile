CC=g++
CFLAGS=-std=c++11

all: Stack Calc
	$(CC) $(CFLAGS) Stack.o Calc.o -o Calc

Stack: Stack.cpp
	$(CC) $(CFLAGS) -c Stack.cpp

Calc: Calc.cpp
	$(CC) $(CFLAGS) -c Calc.cpp

clean:
	rm *.o Calc
