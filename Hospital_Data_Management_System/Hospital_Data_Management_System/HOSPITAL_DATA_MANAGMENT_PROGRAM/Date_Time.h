#ifndef DATE_TIME_H
#define DATE_TIME_H
#include <iostream>
using namespace std;
class Date_Time {
	private:
	    int day, month, year;
	    int hour, min, sec;
	
	public:
	    Date_Time(int month, int day, int year, int hour, int min, int sec);
        void setDate(int month, int day, int year);
        void setTime(int hour, int min, int sec);
        int getMonth() const ;
	    int getDay() const ;
	    int getYear() const ;
	    int getHour() const ;
	    int getMinute() const ;
	    int getSecond() const;
};
#endif