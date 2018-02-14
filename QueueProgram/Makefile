CC=g++
CFLAGS=-std=c++11

all: Stack Calc
	$(CC) $(CFLAGS) Driver.o Queue.o Customer.o Clock.o -o StoreQueue
  
Driver: Driver.cpp
  $(CC) $(CFLAGS) -c Driver.cpp
Queue: Queue.cpp
  $(CC) $(CFLAGS) -c Queue.cpp
Customer: Customer.cpp
  $(CC) $(CFLAGS) -c Customer.cpp
Clock: Clock.cpp
  $(CC) $(CFLAGS) -c Clock.cpp

clean:
rm *.o StoreQueue
