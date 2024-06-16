#include<iostream>
#include<string.h>
using namespace std;
class Zodiac
{
   
    string name;
    string description;
    public:
    void displayPersonality()
    {
        cout<<"Zodiac Sign : "<<name<<endl<<endl<<endl;
        cout<<description<<endl;

    }
    void generateZodiacData(int day,int month)
    {
        
        if(month>=3 && day>=21 || month==4 && day<=19)
        {
            name="Aries";
            description="Independent and strong willed, you are a force to be reckoned with! \nYou love nothing more than an exciting new goal to tackle, and you do your best work when you're flying solo. \nYour passion and energy keep the rest of us on our toes!";
        }
        else if(month>=4 && day>=20 || month==5 && day<=20)
        {
            name="Taurus";
            description="As a Taurus, you're a wonderful combination of laid-back and hard-working. \nYou're honest and loyal, occasionally to a fault. \nYour determination and attention to detail will take you far in life.";
        }
        else if(month>=5 && day>=21 || month==6 && day<=20)
        {
            name="Gemini";
            description="Your ability to get along with a wide variety of people makes you a bit of a social butterfly, \nbut you'll take advantage of some alone time when it comes your way. \nCurious and deeply emotional, you love ritual and celebration.";
        }
         else if(month>=6 && day>=21 || month==7 && day<=22)
        {
            name="Cancer";
            description="Your intuition is downright uncanny! \nYou do your best socializing in small groups and prefer intimate relationships even if it means your social circle is on the smaller side. \nYour creative spirit will bring joy to all you meet.";
        }
        else if(month>=7 && day>=23 || month==8 && day<=22)
        {
            name="Leo";
            description="It's no wonder your symbol is a lion. \nour personality and presence are impressive to all. \nThis may intimidate some, but your inviting spirit will help you easily make friends. \nYour confidence will be an asset to you throughout your life.";


        }
        else if(month>=8 && day>=23 || month==9 && day<=22)
        {
            name="Virgo";
            description="You are the picture of poise and elegance. \nYou love to stay organized and have a strong focus on keeping things aesthetic. \nBut you're not just beauty.\nYou've got brains, too! You'll continue seeking knowledge and intellectual growth as you age.";


        }
        else if(month>=9 && day>=23 || month==10 && day<=22)
        {
            name="Libra";
            description="You have a large social circle, and your open-mindedness helps you get along with just about anyone. \nBut don't get lost in the crowd! A focus on self-care and personal reflection will help you build your confidence over time.";

        }
        else if(month>=10 && day>=23 || month==11 && day<=21)
        {
            name="Scorpio";
            description="As a Scorpio, you can have a sharp edge, but this isn't always a negative quality. \nIt gives you an appreciation for authenticity and a strong sense of independence. \nHowever, you're not always as tough as you appear. \nOnce you let people into your life, you're a bit of a softy.";

        }
         else if(month>=11 && day>=22 || month==12 && day<=21)
        {
            name="Sagittarius";
            description="The road less traveled is your favorite place to be! Your bravery is admirable and will make you a good fit for leadership roles. \nYou also have a bit of an itch in your shoes and will always be ready to take on a new adventure. ";

        }
        else if(month>=12 && day>=22 || month==1 && day<=19)
        {
            name="Capricon";
            description="Your perfectionism and high standards, though sometimes an obstacle, can be one of your superpowers when handled wisely. \nYou have a strong sense of self, which enables you to make meaningful connections and lead the way.";

        }
        else if(month>=1 && day>=20 || month==2 && day<=18)
        {
            name="Aquarius";
            description="You may fall on the introvert side of the spectrum, but that doesn't mean you don't know how to have fun. \nYou have an enviable combination of intelligence and intuition, and you are able to identify positive opportunities even in dark times. ";

        }
        else if(month>=2 && day>=19 || month==3 && day<=20)
        {
            name="Pisces";
            description="You wouldn't hurt a fly! Empathy is your superpower, and you are an asset to any team you join or cause you support. \nYour gentleness is a virtue. \nHowever, be careful to not let your feelings get hurt too easily. \nBe sure to spend time building your self-confidence.";

        }
        
    }


};
class DateOfBirth
{
    int day;
    int month;
    int year;
    Zodiac z1;
    public:
    DateOfBirth(int month=1,int day=1,int year=1)
    {
        setDate(month,day,year);
        
    }
        void setDate(int month, int day, int year)
        {    
        if(month>0 && month<=12)
        {
            this->month=month;
        }
        else{
            cout<<"Invalid Input"<<endl;
           month=0;
        }
        if(day>0 && day<=31)
        {
            this->day=day;
        }
        else{
            cout<<"Invalid Input"<<endl;
           day=0;
        }
        if(year>0)
        {
          this->year=year;
        }
        else{
            cout<<"Invalid Input"<<endl;
            year=0;
        }
        }
        int getDay() const
        {
            return day;
        }
        int getMonth() const
        {
            return month;
        }
        int getYear() const
        {
            return year;
        }
        void generateZodiacData(int day,int month)
        {
            z1.generateZodiacData(day,month);
        }
        void displayPersonality()
        {
            z1.displayPersonality();
        }
       
    



};
class Person
{
    string name;
    DateOfBirth DOB;
    public:
    Person()
    {
        name="";
        
    }
    void setDate(int month, int day, int year)
    {
        DOB.setDate(month,day,year);
    }

    void setName(string name)
    {
        this->name=name;
    }
    string getname()
    {
        return name;
    }
    void generateZodiacData(int day,int month)
    {
        DOB.generateZodiacData(day,month);
    }
    void DisplayPersonality()
    {
        DOB.displayPersonality();
    }

};
int main ()
{
    string name;
    int month,day,year;
    Person p1;
    cout<<"Enter your name "<<endl;
    getline(cin>>ws,name);
    cout<<"Enter your Date Of Birth "<<endl;
    cout<<"Month : ";
    cin>>month;
    cout<<"Day : ";
    cin>>day;
    cout<<"Year : ";
    cin>>year;
    p1.setName(name);
    p1.setDate(month,day,year);
    p1.generateZodiacData(day,month);


    cout<<p1.getname()<<" ,   Your Zodiac Sign with your personality traits are :-  \n\n"<<endl;
    p1.DisplayPersonality();

    


}
