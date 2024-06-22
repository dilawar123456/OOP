#ifndef DOCTORS_H
#define DOCTORS_H
#include "Person.h"
#include <iostream>
using namespace std;
class Doctors : public Person {
	private:
	    string specialization;
	
	public:
	   Doctors(string FirstName, string LastName, int age, int ID, string specialization);
	    void setSpecialization(string specialization);
	    string getSpecialization() const;
	    void Print() const;
	};
    #endif