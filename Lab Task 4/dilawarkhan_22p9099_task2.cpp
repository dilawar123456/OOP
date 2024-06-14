#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
class Dice
{
int value;
public:
void setDice(int dice)
{
  value=dice;
}
int getDice()
{
    return value;
}
int roll()
{
    int min=1;
    int max=6;
 value=rand()%(max+1-min)+min;
 if(value>1 && value<6)
 {
    cout<<"Side : "<<value<<endl;
    cout<<"Better Luck next time "<<endl;
 }
 else if (value==6)
 {
    cout<<"Side : "<<value<<endl;
    cout<<"CHAKKAAA!!"<<endl;
 }
}
};
int main ()
{
    Dice d;
    char ch;
    int x;
     while(1) 
     {
     
        cout<<"do You want to roll dice? Y/N"<<endl;
        cin>>ch;
        if (ch=='Y' || ch=='y')
        {
           x= d.roll();
          
        }
        else if (ch=='N' || ch=='n')
        {
            cout<<"Program Exited!";
            break;
        }
     }
}
