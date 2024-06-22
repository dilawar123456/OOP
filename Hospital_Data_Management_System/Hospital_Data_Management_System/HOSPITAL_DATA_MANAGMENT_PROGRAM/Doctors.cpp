//#include "Person.h"
#include "Doctors.h"
#include<iostream>
using namespace std;
Doctors::Doctors(string FirstName, string LastName, int age, int ID, string specialization)
	        : Person(FirstName, LastName, age, ID), specialization(specialization) {}
	
	    void Doctors::setSpecialization(string specialization) {
	        this->specialization = specialization;
	    }
	
	    string Doctors::getSpecialization() const {
	        return specialization;
	    }
	
	
	
	    void Doctors::Print() const {
	        cout << "\n..........Doctor Information..........\n" << endl;
	        cout << "ID: " << getID() << endl;
	        cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	        cout << "Age: " << getAge() << endl;
	        cout << "Specialization: " << getSpecialization() << endl;
	        cout << "----------------------------------------" << endl;
	    }