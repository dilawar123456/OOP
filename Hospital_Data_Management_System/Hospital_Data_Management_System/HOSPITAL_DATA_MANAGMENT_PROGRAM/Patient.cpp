//#include "Person.h"
//#include "Date_Time.h"
#include "Patient.h"
#include <iostream>
using namespace std;
Patient::Patient(string FirstName, string LastName, int age, int ID, string gender, string contact, string address, string disease, double bill, const Date_Time& entry, const Date_Time& exit)
	        : Person(FirstName, LastName, age, ID), gender(gender), contact(contact), address(address), disease(disease), bill(bill), entry(entry), exit(exit) {}
	
	    void Patient:: setGender(string gender) {
	        this->gender = gender;
	    }
	    void Patient:: setContact(string contact) {
	        this->contact = contact;
	    }
	    void Patient:: setAddress(string address) {
	        this->address = address;
	    }
	    void Patient:: setDisease(string disease) {
	        this->disease = disease;
	    }
	    void Patient:: setBill(double bill) {
	        this->bill = bill;
	    }
	
	    string Patient:: getGender() const {
	        return gender;
	    }
	    string Patient:: getContact() const {
	        return contact;
	    }
	    string Patient:: getAddress() const {
	        return address;
	    }
	    string Patient:: getDisease() const {
	        return disease;
	    }
	    double Patient:: getBill() const {
	        return bill;
	    }
	 const Date_Time& Patient:: getEntry() const {
	        return entry;
	    }
	
	    const Date_Time& Patient::getExit() const {
	        return exit;
	    }
	   
	
	    void Patient:: Print() const {
	        cout << "\n..........Patient Information..........\n" << endl;
	        cout << "ID: " << getID() << endl;
	        cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	        cout << "Age: " << getAge() << endl;
	        cout << "Gender: " << getGender() << endl;
	        cout << "Contact: " << getContact() << endl;
	        cout << "Address: " << getAddress() << endl;
	        cout << "Disease: " << getDisease() << endl;
	        cout << "Bill: $" << getBill() << endl;
	        cout << "Entry Date: ";
	        cout << "Entry Date and Time: " << entry.getMonth() << "/" << entry.getDay() << "/" << entry.getYear() << " " << entry.getHour() << ":" << entry.getMinute() << ":" << entry.getSecond() << endl;
	        cout << "Exit Date and Time: " << exit.getMonth() << "/" << exit.getDay() << "/" << exit.getYear() << " " << exit.getHour() << ":" << exit.getMinute() << ":" << exit.getSecond() << endl;
	        cout << "-----------------------------------------" << endl;
	    }
