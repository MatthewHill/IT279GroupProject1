
#include "Clock.h"
#include <cstdlib>
Clock::Clock() {
	Clockr( 0 ,0);
}

Clock::Clock(int currentTime, int X) {
	this::currentTime = currentTime;
	this::X = X;//x serves as the max value
}
int Clock::generateArrival()
{
	 return (rand() % (x + 1)) +currentTime; // returns a value between 0 and x and adds it to the clock.  This is the actual arrival time
}
int Clock::generateServiceTime()
{
	return = (rand() % (x+1))  //returns a value between 0 and x  .  This is the actual service time
}
