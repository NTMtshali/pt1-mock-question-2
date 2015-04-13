#include <iostream>
#include "Time.h"

Time::Time(int hh=0, int mm=0)
{
	set(hh, mm);
}

void Time::set(int hh, int mm)
{
	if (hh >= 0 && hh <=23)
		Hour = hh;
	else
		throw invalid_argument("Hours must be from 0-23");

	if (mm >= 0 && mm <=59)
		Min = mm;
	else
		throw invalid_argument("Minutes must between 0-59");
}

void Time::get(int &hh, int &mm) const
{
	hh = Hour;
	mm = Min;
}

ostream &operator<<(ostream &output, const Time &t)
{
	output << t.Hour << ":" << t.Min << endl;

	return output;
}

Time Time::operator++(int)
{
	Time Temp = *this;
	

	if (Min < 59)
		++Min;
	else
		Min = 0;

	if (Hour < 23 && Min==0)
		++Hour;
	else
		Hour = 0;


	return Temp;
}