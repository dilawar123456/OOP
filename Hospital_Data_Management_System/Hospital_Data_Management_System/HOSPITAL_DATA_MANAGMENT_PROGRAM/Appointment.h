#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include "Doctors.h"
#include "Patient.h"
#include "User.h"


#include <iostream>
using namespace std;
class Appointment {
	private:
	    const Doctors& doctor;
	    const Patient& patient;
	public:
	    Appointment(const Doctors& doctor, const Patient& patient);
	
	    void display() const;
	};
    #endif