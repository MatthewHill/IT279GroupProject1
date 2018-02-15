#ifndef ClOCK_H
#define CLOCK_H

class Clock {
public:
	Clock();
	Clock(int currentTime, int x);

	int generateArrival();
	int generateServiceTime();
	int getCurrentTime();
	void setCurrentTime(int C);
private:
	int currentTime;
	int x;
};

#endif 