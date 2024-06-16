#include <iostream>
using namespace std;
class Character
{
    string name;
    public:
    Character(string name="")
    {
        this->name=name;
    }
    virtual void attack()
    {

    }
    void setName(string name)
    {
        this->name=name;
    }
    string getname()
    {
        return name;
    }
};
class Warrior:public Character
{
    int strength;
    public:
    Warrior(string name="", int strength=0):Character(name)
    {
        setStrength(strength);
    }
    void setStrength(int strength)
    {
        this->strength=strength;
    }
    void attack()
    {
        cout<<getname()<<" attacks with strength "<<strength<<endl;
    }

};
class Mage:public Character
{
    int intelligence;
    public:
    Mage(string name="",int intelligence=0):Character(name)
    {
        setIntelligence(intelligence);
    }
    void setIntelligence(int intelligence)
    {
        this->intelligence=intelligence;
    }
    void attack()
    {
        cout<<getname()<<" attacks with fireballs using intelligence "<<intelligence<<endl;
    }
};
class Theif:public Character
{
    int agility;
    public:
    Theif(string name="",int agility=0):Character(name)
    {
        setAgility(agility);
    }
    void setAgility(int agility)
    {
        this->agility=agility;
    }
    void attack()
    {
        cout<<getname()<<" attacks with daggers using agility "<<agility<<endl;
    }

};
int main()
{
    string name;
    int power;
    Warrior w1;
    Mage m1;
    Theif t1;
    cout<<"Enter the Warrior name "<<endl;
    getline(cin>>ws,name);
    cout<<"Enter the Warrior strength"<<endl;
    cin>>power;
    w1.setName(name);
    w1.setStrength(power);
    
    cout<<"Enter the Mage name "<<endl;
    getline(cin>>ws,name);
    cout<<"Enter the Mage intelligence "<<endl;
    cin>>power;
    m1.setName(name);
    m1.setIntelligence(power);

    cout<<"Enter the Theif name "<<endl;
    getline(cin>>ws,name);
    cout<<"Enter the theif agility"<<endl;
    cin>>power;

    t1.setName(name);
    t1.setAgility(power);

    w1.attack();
    m1.attack();
    t1.attack();
}