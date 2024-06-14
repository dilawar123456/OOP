#include <iostream>
using namespace std;
class Animal
{
    protected:
    string name;
    string color;
    public:
    Animal(string name,string color)
    {
        setName(name);
        setColor(color);
    }
    virtual void setName(string name)
    {
        this->name=name;
    }
   virtual void setColor(string color)
    {
        this->color=color;
    }
    virtual void display()=0;
   virtual ~Animal()
    {
        cout<<"Animal destroyed"<<endl;

    }
};
class Deer:public Animal
{
    bool hasAntlers;
    public:
    Deer(string color="",string name="",bool hasAntlers=""):Animal(color,name)
    {
        this->hasAntlers=hasAntlers;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setColor(string color)
    {
        this->color=color;
    }
    void display()
    {
        cout<<"Deers name is "<<name<<endl;
        cout<<"Deer's colors is "<<color<<endl;
        if (hasAntlers==true)
        {
            cout<<"Deer has Antlers "<<endl;

        }
        else
        {
            cout<<"Deer does not have Antlers"<<endl;
        }

    }
    ~Deer()
    {
        cout<<"Deer destroyed"<<endl;
    }
};
class Zebra:public Animal
{
  string strip_type;
  public:
  Zebra(string name="",string color="",string strip_type=""):Animal(name,color)
  {
    this->strip_type=strip_type;
  }
  void setStripType(string strip)
  {
    strip_type=strip;
  }
  void setName(string name)
    {
        this->name=name;
    }
    void setColor(string color)
    {
        this->color=color;
    }
  void display()
  {
    cout<<"Zebra's name is "<<name<<endl;
    cout<<"Zebra's color is "<<color<<endl;
    cout<<"Zebra's strip patern is "<<strip_type<<endl;

  }
  ~Zebra()
  {
    cout<<"Zebra destroyed "<<endl;
  }
};
void display(Animal *a[2])
{
    for(int i=0;i<2;i++)
    {
        a[i]->display();
        cout<<"----------------------------------"<<endl;
    }
   
}
int main ()
{

int x;


Animal *a1[2];
for(int i=0;i<2;i++)
{
    cout<<"Select the type of animal"<<endl;
    cout<<"1- Deer "<<endl;
    cout<<"2- Zebra"<<endl;
    cin>>x;
    if(x==1)
    {
        a1[i]=new Deer("Deer","brown",true);
    }
    if (x==2)
    {
        a1[i]=new Zebra("Zebra","Black & White","Vertical strips");
    }
}
display(a1);
delete a1[0];
delete a1[1];
a1[0]=NULL;
a1[1]=NULL;



}