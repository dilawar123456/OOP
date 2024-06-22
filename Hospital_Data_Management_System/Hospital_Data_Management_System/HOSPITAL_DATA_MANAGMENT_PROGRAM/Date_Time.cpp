#include "Date_Time.h"
#include<iostream>
using namespace std;
Date_Time::  Date_Time(int month, int day, int year, int hour, int min, int sec) {
	        setDate(month, day, year);
	        setTime(hour, min, sec);
	    }
void Date_Time:: setDate(int month, int day, int year) {
	        if (month > 0 && month <= 12) {
	            this->month = month;
	        }
	        else {
	            cout << "x...........Invalid Input!...........x" << endl;
	            month = 0;
	        }
	        if (day > 0 && day <= 31) {
	            this->day = day;
	        }
	        else {
	            cout << "x...........Invalid Input!...........x" << endl;
	            day = 0;
	        }
	        if (year > 0) {
	            this->year = year;
	        }
	        else {
	            cout << "x...........Invalid Input...........x" << endl;
	            year = 0;
	        }
	    }
void Date_Time::setTime(int hour, int min, int sec) {
	        if (hour >= 0 && hour < 23) {
	            this->hour = hour;
	        }
	        else {
	            cout << "\nx...........Invalid input For Hour!............x\n" << endl;
	            hour = 0;
	        }
	        if (min >= 0 && min < 60) {
	            this->min = min;
	        }
	        else {
	            cout << "\nx...........Invalid input For Minute!...........x\n" << endl;
	            min = 0;
	        }
	        if (sec >= 0 && sec < 60) {
	            this->sec = sec;
	        }
	        else {
	            cout << "\nx...........Invalid input For Seconds...........x\n" << endl;
	            sec = 0;
	        }
	    }
int Date_Time::getMonth() const {
	        return month;
	    }
        int  Date_Time:: getDay() const {
	        return day;
	    }
	    int  Date_Time::getYear() const {
	        return year;
	    }
	    int Date_Time:: getHour() const {
	        return hour;
	    }
	    int Date_Time:: getMinute() const {
	        return min;
	    }
	    int  Date_Time::getSecond() const {
	        return sec;
	    }
	