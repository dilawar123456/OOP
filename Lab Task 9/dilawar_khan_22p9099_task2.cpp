#include <iostream>
using namespace std;
class Boat
{
    protected:
    double boatlength;
    public:
    void swim()
    {
        cout<<"I am swimming "<<endl;
    }
    Boat(double length)
    {
        boatlength=length;
    }


};
class Plane
{
    protected:
  double   MaxAltitude;
  public:
  void fly()
  {
    cout<<"I am Flying "<<endl;
  }
  Plane(double altitude)
  {
    MaxAltitude=altitude;
  }

};
class Skimmer:protected Boat, protected Plane
{
    private:
    string name;
    int numPassengers;
    public:
    void swim_and_fly()
    {
        Boat::swim();
        Plane::fly();
    }
    Skimmer(double length, double altitude, int passengers,string name):Boat(length),Plane(altitude)
    {
        this->numPassengers=passengers;
        this->name=name;

    }
    void display()
    {
        cout<<"Skimmer Name : "<<name<<endl;
        cout<<"Length : "<<boatlength<<"ft"<<endl;
        cout<<"Max altitude : "<<MaxAltitude<<endl;
        cout<<"Passengers : "<<numPassengers<<endl;
    }

};
int main ()
{
    string name;
    double length;
    double maxaltitude;
    int passengers;
    cout<<"Enter the name of the skimmer "<<endl;
    getline(cin>>ws,name);
    cout<<"Enter the length of the skimmer "<<endl;
    cin>>length;
    cout<<"Enter the Max Altitude of the skimmer "<<endl;
    cin>>maxaltitude;
    cout<<"Enter the number of passengers that the skimmer can carry "<<endl;
    cin>>passengers;
    Skimmer s1(length,maxaltitude,passengers,name);
    s1.display();
    s1.swim_and_fly();



    return 0;

}