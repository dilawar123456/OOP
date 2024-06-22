
#include"Doctors.h"
#include"Patient.h"
#include"Appointment.h"
#include"User.h"
#include<vector>
#include <iostream>
using namespace std;
class Hospital {
	private:
	    string name;
	    vector<Doctors> doctors;
	    vector<Patient> patients;
	    vector<Appointment> appointments;
	    vector<User> users;
	
	public:
		Hospital() ;
	    
	    void setHospital_name(string name);
	    string getHospital_name() const ;
	
	    void setDoctors(const vector<Doctors>& doctors) ;
	    const vector<Doctors>& getDoctors() const;
	    
	  	bool login(const string& username, const string& password);
		void searchDoctor(int doctorID) const;
	     void addDoctor(const Doctors& doctor) ;
	
	    void addPatient(const Patient& patient);
	    void displayDoctors() const ;
	
	    void displayPatients() const ;
	
	    void bookAppointment();
	     void displayAppointments() const;
	    void deletePatient(int patientID);
	
	    void deleteDoctor(int doctorID);
	};