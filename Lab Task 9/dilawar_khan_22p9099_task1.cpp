#include <iostream>
using namespace std;
class Animal
{
public:
string name;
int age;
Animal(string name, int age)
{
    this->name=name;
    this->age=age;
}
void speak()
{

}



};
class Bird: private Animal
{
    private:
    int winglength;
    public:
    Bird(string name, int age, double winglength):Animal(name,winglength)
    {
        this->winglength=winglength;
    }

    void speak()
    {
        cout<<"My name is "<<name<<endl;
        cout<<"My age is age "<<age<<endl;
        cout<<"My length is "<<winglength<<endl;
        cout<<"I am a bird and i can sing "<<endl;
    }
};
class Reptile: private Animal
{
    private:
    string habitat;
    public:
    Reptile(string name,int age,string habitat):Animal(name,age)
    {
        this->habitat=habitat;
    }
    void speak()
    {
        cout<<"My name is "<<name<<endl;
        cout<<"My age is age "<<age<<endl;
        cout<<"My habitat is "<<habitat<<endl;
        cout<<"I am a reptile and I can creep "<<endl;

    }

};
int main ()
{
   string name;
   int age;
   double length;
   string habitat;
   cout<<"ENTER THE DETAILS OF BIRD  "<<endl;
   cout<<"Enter the name of bird "<<endl;
   getline(cin>>ws,name);
   cout<<"Enter the age of bird "<<endl;
   cin>>age;
   cout<<"Enter the wing length of bird "<<endl;
   cin>>length;
   Bird b1(name,age,length);
   cout<<"ENTER THE DETAILS OF Reptile  "<<endl;
   cout<<"Enter the name of Reptile "<<endl;
   getline(cin>>ws,name);
   cout<<"Enter the age of Reptile "<<endl;
   cin>>age;
   cout<<"Enter the habitat of Reptile "<<endl;
   getline(cin>>ws,habitat);
   Reptile r1(name,age,habitat);
   b1.speak();
   r1.speak();


   

}