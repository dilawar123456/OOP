#include"Doctors.h"
#include"Patient.h"
#include"Appointment.h"
#include"User.h"
#include"Hospital.h"
#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
		
		string username, password;
	    bool loggedIn = false;
	
	    cout << "Enter username: ";
	    cin >> username;
	    cout << "Enter password: ";
	    cin >> password;
	
	    Hospital hospital;
	
	    if (hospital.login(username, password)) {
	        cout << "Login successful!" << endl;
	        loggedIn = true;
	    }
		 else {
	        cout << "Invalid username or password. Please try again." << endl;
	    }
	    if(loggedIn){
	    	 hospital.setHospital_name("FAST Public Hospital");
	    cout<<"x....................."<< hospital.getHospital_name()<<".............................x\n\n"<<endl;
	    
	      int choice;
	    do {
	    	
	        cout << "<<<<<<..Menu..>>>>>>:" << endl;
	        cout << "1. Add Doctor" << endl;
	        cout << "2. Add Patient" << endl;
	        cout << "3. Book Appointment" << endl;
	        cout << "4. Search Doctors" << endl;
	        cout << "5. Display Patients" << endl;
	        cout << "6. Display Doctors" << endl;
	        cout << "7. Display Appointments" << endl;
	        cout << "8. Delete a Patient's Record'." << endl;
	        cout << "9. Delete a Doctor's Record'." << endl;
	        cout << "0. Exit" << endl;
	        cout << "Enter your choice: ";
	        cin >> choice;
	
	        switch (choice) {
	            case 1: {
	                 string firstName, lastName, specialization;
	                int age, ID;
	
	                cout << "Enter doctor details:" << endl;
	                cout << "First Name: ";
	                cin >> firstName;
	                cout << "Last Name: ";
	                cin >> lastName;
	                cout << "Age: ";
	                cin >> age;
	                cout << "ID: ";
	                cin >> ID;
	                cout << "Specialization: ";
	                cin >> specialization;
	
	                Doctors doctor(firstName, lastName, age, ID, specialization);
	              
	                hospital.addDoctor(doctor);
	
	                break;
	            }
	            case 2: {
	                string firstName, lastName, gender, contact, address, disease;
				    int age, ID;
				    double bill;
				
				    cout << "Enter patient details:" << endl;
				    cout << "First Name: ";
				    cin >> firstName;
				    cout << "Last Name: ";
				    cin >> lastName;
				    cout << "Age: ";
				    cin >> age;
				    cout << "ID: ";
				    cin >> ID;
				    cout << "Gender: ";
				    cin >> gender;
				    cout << "Contact: ";
				    cin >> contact;
				    cout << "Address: ";
				    cin >> address;
				    cout << "Disease: ";
				    cin >> disease;
				    cout << "Bill: ";
				    cin >> bill;
				
				    int entryMonth, entryDay, entryYear, entryHour, entryMin, entrySec;
				    cout << "Enter entry date and time (MM DD YYYY HH MM SS): ";
				    cin >> entryMonth >> entryDay >> entryYear >> entryHour >> entryMin >> entrySec;
				    Date_Time entry(entryMonth, entryDay, entryYear, entryHour, entryMin, entrySec);
				
				    int exitMonth, exitDay, exitYear, exitHour, exitMin, exitSec;
				    cout << "Enter exit date and time (MM DD YYYY HH MM SS): ";
				    cin >> exitMonth >> exitDay >> exitYear >> exitHour >> exitMin >> exitSec;
				    Date_Time exit(exitMonth, exitDay, exitYear, exitHour, exitMin, exitSec);
				
				    Patient patient(firstName, lastName, age, ID, gender, contact, address, disease, bill, entry, exit);
				
					hospital.addPatient(patient);
					cout << "\nx.........Patient added successfully!..........x\n" << endl;
	
	                break;
	            }
	            case 3: {
	               
					// Book appointment for a patient with a doctor
	
						hospital.bookAppointment();
					    break;
	                
	            }
	            case 4: {
	                int searchId;
				    std::cout << "\nEnter the ID of the Doctor , to search for: ";
				    std::cin >> searchId;
				    hospital.searchDoctor(searchId);
	                break;
	            }
	            case 5: {
	            	
	                hospital.displayPatients();
	                break;
	            }
	             case 6: {
	                hospital.displayDoctors();
	                break;
	            }
	            case 7: {
	                hospital.displayAppointments();
	                break;
	            }
	            case 8: {
	            	int Id;
				    std::cout << "\nEnter the ID of the Patient you want to delete: ";
				    std::cin >> Id;
	                hospital.deletePatient(Id);
	                break;
	            }
	            case 9: {
	          		int Id;
				    std::cout << "\nEnter the ID of the Doctor you want to delete: ";
				    std::cin >> Id;
	                hospital.deleteDoctor(Id);
	                break;
	            }
	            case 0:
	                cout << "\nExiting..." << endl;
	                break;
	            default:
	                cout << "\n..........Invalid choice!..........\n" << endl;
	                break;
	        }
	        cout << endl;
	    } while (choice != 0);
	
	    return 0;
		}
	   
	}
