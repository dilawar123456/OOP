#include <iostream>
using namespace std;
int main()
{
    int sec,min,hour;
    cout<<"Please enter the seconds "<<endl;
    cin>>sec;
    min=sec/60;
    hour=min/60;
    sec=sec%60;
    min=min-(hour*60);
    cout<<"    The total time is   "<<endl;
    cout<<hour<<" : "<<min<<" : "<<sec;
}