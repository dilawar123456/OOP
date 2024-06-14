#include <iostream>
using namespace std;

class Course
{
    string course_code;
    string course_name;
    string instructor;
    public:
    Course(string course_code="",string course_name="",string instructor="")
    {
        this->course_code=course_code;
        this->course_name=course_name;
        this->instructor=instructor;
    }
    void print()
    {
        cout<<"Course Code :"<<course_code<<endl;
        cout<<"Course Name :"<<course_name<<endl;
        cout<<"Course Instructor :"<<instructor<<endl;

    }

};
class Program
{
    string name;
    int ID;
    Course courses[3];
    int i=0;
    public:
    Program(string name="",int ID=0)
    {
        this->name=name;
        this->ID=ID;
    }
    void addCourse(Course c1)
    {
      courses[i]=c1;
      i++;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"ID :"<<ID<<endl;
        for(int i=0;i<3;i++)
        {
        cout<<"-----------------------------------"<<endl;
         courses[i].print();
         
        }
        
    }

};
int main()
{
    Program p1("Dilawar Khan",9099);
    Course c1("cl-3001","Discreet Structures","Noman Azam");
    Course c2("cl-1012","Calculas","Osama Sohrab");
    Course c3("cl-2120","OOP","Fariba Laiq");
     p1.addCourse(c1);
     p1.addCourse(c2);
     p1.addCourse(c3);
     p1.display();
}