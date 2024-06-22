#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include "Date_Time.h"
#include <iostream>
using namespace std;
class Patient : public Person
{
private:
    string gender;
    string contact;
    string address;
    string disease;
    double bill;
    Date_Time entry;
    Date_Time exit;

public:
    Patient(string FirstName, string LastName, int age, int ID, string gender, string contact, string address, string disease, double bill, const Date_Time &entry, const Date_Time &exit);
    void setGender(string gender);
    void setContact(string contact);
    void setAddress(string address);
    void setDisease(string disease);
    void setBill(double bill);
    string getGender() const;

    string getContact() const;

    string getAddress() const;

    string getDisease() const;

    double getBill() const;

    const Date_Time &getEntry() const;
    const Date_Time &getExit() const;
    void Print() const;
};
#endif
