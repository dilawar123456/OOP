
#include "Appointment.h"
#include<vector>
#include <iostream>
using namespace std;

	    Appointment::Appointment(const Doctors& doctor, const Patient& patient) : doctor(doctor), patient(patient) {}
	
	    void Appointment::display() const {
	        cout << "\nx..........Appointment Details..........x\n" << endl;
	        cout << "\n...Doctor:...\n " << "ID:"<<doctor.getID()<<doctor.getFirstName() << " " << doctor.getLastName() << endl;
	        cout << "\n...Patient:...\n" << "ID:"<<patient.getID()<<patient.getFirstName() << " " << patient.getLastName()<< endl;
	        cout << endl;
        }