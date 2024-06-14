#include <iostream>
using namespace std;
class DOB
{
    int month;
    int day;
    int year;
    public:
   
    void setmonth(int month)
    {
        this->month=month;
    }
    void setday(int day)
    {
        this->day=day;
    }
    void setyear(int year)
    {
        this->year=year;
    }
    int getmonth()
    {
        return month;
    }
    int getday()
    {
        return day;
    }
    int getyear()
    {
        return year;
    }
};
class Contact
{
    string name;
    string phone_number;
    string email;
    DOB date;
    public:
    void setDate(int M,int D,int Y)
    {
        date.setmonth(M);
        date.setday(D);
        date.setyear(Y);
    }
    int getMonth()
    {
        return date.getmonth();
    }
    int getDay()
    {
        return date.getday();
    }
    int getYear()
    {
        return date.getyear();
    }
     
    void setname(string name)
    {
        this->name=name;
    }
    void setnumber(string phone_number)
    {
        this->phone_number=phone_number;
    }
    void setemail(string email)
    {
        this->email=email;
    }
    string getname()
    {
        return name;
    }


    string getnumber()
    {
        return phone_number;
    }
    string getemail()
    {
        return email;
    }

};
class Contact_Book
{
    int size=3;
    Contact c1[3];
    public:
    
    int getsize()
    {
        return size;
    }
    void setdata(int month,int day,int year,string name,string phone_number,string email,int i)
    {
        
            c1[i].setDate( month, day,year);
            c1[i].setname(name);
            c1[i].setnumber(phone_number);
            c1[i].setemail(email);
             
        
    }
    
    void print(int m)
    {
        for(int i=0;i<size;i++)
        {
        if(m==c1[i].getMonth())
        {
            cout<<"The name of person whose dob in month "<<m<<" is "<<endl;
            cout<<c1[i].getname()<<endl;
        }
        }
    }


};
int main()
{
    Contact_Book book;
    int month,day,year,check_month;
    string name;
    string email;
    string number;
    cout<<"Please enter the details of contacts"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter The month of date of birth "<<endl;
        cin>>month;
        cout<<"Enter The day of date of birth "<<endl;
        cin>>day;
        cout<<"Enter The year of date of birth "<<endl;
        cin>>year;
        cout<<"Enter the name"<<endl;
        getline(cin>>ws,name);
        cout<<"Enter the email"<<endl;
        getline(cin>>ws,email);
        cout<<"Enter the Phone number"<<endl;
        getline(cin>>ws,number);
        cout<<"--------------------------------------"<<endl;
        book.setdata( month,day,year, name,number,email,i);
               
    }
    cout<<"Enter the month to check date of birth"<<endl;
    cin>>check_month;
    book.print(check_month);

return 0;
}