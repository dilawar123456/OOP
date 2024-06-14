#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
float kg,m,bmi;
cout<<"Please enter the weight in kg"<<endl;
cin>>kg;
cout<<"Please enter the height in meters"<<endl;
cin>>m;
bmi=kg/(m*m);

cout<<"The BMI is "<<setprecision(4)<<bmi;


return 0;

}