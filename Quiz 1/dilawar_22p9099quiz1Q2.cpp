#include <iostream>
using namespace std;
class Vehicle
{
    protected:
    int ID;
    string model;
    int year;
    public:
    Vehicle(int ID=0, string model="", int year=0)
    {
        this->ID=ID;
        this->model=model;
        this->year=year;
    }
    virtual void displayDetails()
    {

    }
};
class Car:public Vehicle
{
    int total_doors;
    int max_speed;
    public:
    Car(int ID=0, string model="", int year=0,int total_doors=0,int max_speed=0):Vehicle(ID,model,year)
    {
        this->total_doors=total_doors;
        this->max_speed=max_speed;
    }
    void displayDetails()
    {
        cout<<"ID :"<<ID<<endl;
        cout<<" Model :"<<model<<endl;
        cout<<" Year :"<<year<<endl;
        cout<<" Total Doors :"<<total_doors<<endl;
        cout<<" max speed :"<<max_speed<<endl;
    }
    ~Car()
    {
        cout<<" Car destroyed"<<endl;
    }


};
class Truck: public Vehicle
{
    double payload_capacity;
    public:
    Truck(int ID=0, string model="", int year=0,double payload_capacity=0 ):Vehicle(ID,model,year)
    {
        this->payload_capacity=payload_capacity;
    }
    void displayDetails()
    {
        cout<<"ID :"<<ID<<endl;
        cout<<" Model :"<<model<<endl;
        cout<<" Year :"<<year<<endl;
        cout<<" Pay Load Capacity :"<<payload_capacity<<endl;
       
    }
    ~Truck()
    {
        cout<<"Truck destroyed"<<endl;
    }

};
void displayAll(Vehicle v[])
{
    for(int i=0;i<2;i++)
    {
   
    
        v[i].displayDetails();
    }
    
}
int main ()
{
    Vehicle *v[2];
    v[0]=new Car(756,"Honda",2017,4,20);
    v[1]=new Truck(234,"Ford",2013,180);
    displayAll(v[2]);

}