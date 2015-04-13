#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time
{
private:
	int Hour;
	int Min;

public:
	Time(int, int);
	~Time();
	void set(int, int);
	void get(int &, int &) const;
	friend ostream &operator<<(ostream &, const Time &);
	Time operator++(int);
};
#endif