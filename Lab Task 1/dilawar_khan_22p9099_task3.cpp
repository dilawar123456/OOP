#include <iostream>
using namespace std;
int main ()
{
    int price=0;
    char ch;
    cout<<"     Do you want burger ?"<<endl;
    cout<<" if yes press y if no press n"<<endl;
    cin>>ch;
    if(ch=='y' || ch=='Y')
    {
        price=price+500;
        cout<<"Do you want to add cold drink and fries for only 200 "<<endl<<"if yes press y if no press n";
        cin>>ch;
        if(ch=='y' || ch=='Y')
        {
            price=price+200;
          cout<<"The total price is "<<price<<endl;
          cout<<"Thank you for shopping!";
          
        }
        else if(ch=='n' || ch=='N')
        {
            cout<<"The total price is "<<price<<endl;
          cout<<"Thank you for shopping!";
        }
        else 
        {
            cout<<"invalid input"<<endl;
        }

    }
    else if(ch=='n' || ch=='N')
    {
        cout<<"Thankyou!";
    }
    else{
        cout<<"Invalid input";
    }
}