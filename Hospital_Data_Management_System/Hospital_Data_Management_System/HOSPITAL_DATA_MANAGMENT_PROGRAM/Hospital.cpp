#include"Doctors.h"
#include"Patient.h"
#include"Appointment.h"
#include"User.h"
#include"Hospital.h"
#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;

		Hospital::Hospital() {
	        // Create some sample users
	        users.push_back(User("admin", "admin123"));
	     //   users.push_back(User("user", "user123"));
	    }
	    
	    void Hospital:: setHospital_name(string name) {
	        this->name = name;
	    }
	
	    string Hospital:: getHospital_name() const {
	        return name;
	    }
	
	    void Hospital:: setDoctors(const vector<Doctors>& doctors) {
	        this->doctors = doctors;
	    }
	
	    const  vector<Doctors>& Hospital:: getDoctors() const {
	        return doctors;
	    }
	    
	  	bool Hospital:: login(const string& username, const string& password) {
	        for (const User& user : users) {
	            if (user.getUsername() == username && user.getPassword() == password) {
	                return true;
	            }
	        }
	        return false;
	    }
	    
		void Hospital:: searchDoctor(int doctorID) const {
	    bool found = false;
	    for (const Doctors& doctor : doctors) {
	        if (doctor.getID() == doctorID) {
	            doctor.Print();
	            found = true;
	            break;
	        }
	    }
	
	    if (!found) {
	        cout << "\nx..........No such doctor!..........x\n" << endl;
	    }
	}
	     void Hospital:: addDoctor(const Doctors& doctor) {
	        doctors.push_back(doctor);
	    }
	
	    void Hospital:: addPatient(const Patient& patient) {
	        patients.push_back(patient);
	    }
	
	    void Hospital:: displayDoctors() const {
	        cout << "\nx..........List of Doctors..........x\n" << endl;
	        for (const Doctors& doctor : doctors) {
	            doctor.Print();
	        }
	        cout << endl;
	    }
	
	    void Hospital:: displayPatients() const {
	        cout << "\nx..........List of Patients..........x\n" << endl;
	        for (const auto& patient : patients) {
	            patient.Print();
	        }
	        cout << endl;
	    }
	
	    void Hospital:: bookAppointment() {
	        int patientID, doctorID;
	        cout << "Enter the ID of the patient: ";
	        cin >> patientID;
	        cout << "Enter the ID of the doctor: ";
	        cin >> doctorID;
	  // Find the patient and doctor based on their IDs
	        Patient* patient = nullptr;
	        Doctors* doctor = nullptr;
	
	        for (auto& p : patients) {
	            if (p.getID() == patientID) {
	                patient = &p;
	                break;
	            }
	        }
	
	        for (auto& d : doctors) {
	            if (d.getID() == doctorID) {
	                doctor = &d;
	                break;
	            }
	        }
	
	        if (patient != nullptr && doctor != nullptr) {
	            Appointment appointment(*doctor, *patient);
	            appointments.push_back(appointment);
	            cout << "\nx..........Appointment booked successfully!..........x\n" << endl;
	        } else {
	            cout << "\nx..........Invalid patient ID or doctor ID. Please try again...........x\n" << endl;
	        }
	    }
	     void Hospital:: displayAppointments() const {
	        if (appointments.empty()) {
	            cout << "No appointments booked." << endl;
	        } else {
	            cout << "List of Appointments:" << endl;
	            for (const auto& appointment : appointments) {
	                appointment.display();
	            }
	        }
	        cout << endl;
	    }
	    void Hospital:: deletePatient(int patientID) {
	        auto it = std::find_if(patients.begin(), patients.end(), [patientID](const Patient& patient) {
	            return patient.getID() == patientID;
	        });
	
	        if (it != patients.end()) {
	            patients.erase(it);
	            std::cout << "\nx..........Patient with ID " << patientID << " deleted successfully!...........x\n" << std::endl;
	        } else {
	            std::cout << "\nx..........No patient with ID " << patientID << " found!..........x\n" << std::endl;
	        }
	    }
	
	    void Hospital:: deleteDoctor(int doctorID) {
	        auto it = std::find_if(doctors.begin(), doctors.end(), [doctorID](const Doctors& doctor) {
	            return doctor.getID() == doctorID;
	        });
	
	        if (it != doctors.end()) {
	            doctors.erase(it);
	            std::cout << "Doctor with ID " << doctorID << " deleted successfully." << std::endl;
	        } else {
	            std::cout << "\nx..........No doctor with ID " << doctorID << " found!..........x\n" << std::endl;
	        }
	    }
	
