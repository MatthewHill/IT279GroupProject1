#ifndef ClOCK_H
#define CLOCK_H

class Clock {
public:
	Clock();
	Clock(int currentTime, int x);
    Clock(const Clock &obj);
    Clock& operator = (const Clock &obj);

	int generateArrival();
	int generateServiceTime();
	int getCurrentTime();
	void setCurrentTime(int C);
	void setX(int input);
private:
	int currentTime;
	int x;
};

#endif 
