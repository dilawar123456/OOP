#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person {
	private:
	    string FirstName;
	    string LastName;
	    int age;
	    int ID;
        public:
	    Person(string FirstName, string LastName, int age, int ID);
         void setFirstName(string Fname);
         void setLastName(string Lname);
          void setAge(int age);
          void setID(int id);
           string getFirstName() const;
        string getLastName() const ;
        int getAge() const;
        int getID() const;
        virtual void Print() const = 0;
};
#endif