#include "Person.h"
#include <iostream>
using namespace std;
 Person::Person(string FirstName, string LastName, int age, int ID) {
	        setFirstName(FirstName);
	        setLastName(LastName);
	        setAge(age);
	        setID(ID);
	    }

void Person::setFirstName(string Fname) {
	        FirstName = Fname;
	    }
void Person::setLastName(string Lname) {
	        LastName = Lname;
	    }

void Person::setAge(int age) {
	        this->age = age;
	    }
void Person:: setID(int id) {
	        ID = id;
	    }
string Person::getFirstName() const {
	        return FirstName;
	    }
string Person::getLastName() const {
	        return LastName;
	    }
int Person::getAge() const {
	        return age;
	    }
int Person::getID() const {
	        return ID;
	    }
	