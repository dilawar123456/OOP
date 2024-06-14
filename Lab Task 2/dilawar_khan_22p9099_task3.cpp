#include<iostream>
using namespace std;
int main ()
{
char ch;
int m,n;
bool rooms;
int floor=4;
int room=5;
int hotel[floor][room];
int cost=0;
int day=0;
int day1=0;

for(int i=0;i<4;i++)
{
    for(int j=0;j<5;j++)
    {
        hotel[i][j]=0;
    }
}

cout<<"         Please choose an operation      "<<endl;
cout<<"A) Book a room "<<endl;
cout<<"B) Show available rooms "<<endl;
cout<<"C) Exit the program "<<endl;
cin.get(ch);
if (ch=='A' || ch=='a')
{
cout<<"Please select floor (1-4)"<<endl;
cin>>m;
if (m==1)
{
    cout<<"please select room no. (1-5) "<<endl;
    cin>>n;
    if(n==1){
    if(hotel[0][0]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [0][0]==0)
    { 
        cout<<"room booked successfully"<<endl;
        hotel[0][0]=1;
        cout<<"For how many days do you want the room ?"<<endl;;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }
    if(n==2){
    if(hotel[0][1]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [0][1]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[0][1]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }
    if(n==3){
    if(hotel[0][2]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [0][2]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[0][2]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }
    if(n==4){
    if(hotel[0][3]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [0][3]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[0][3]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }
    if(n==5){
    if(hotel[0][4]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [0][4]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[0][4]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }
}


if(m==2)
{

    cout<<"please select a room number (1-5)";
    cin>>n;
    if(n==1)
    {
    if(hotel[1][0]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [1][0]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[1][0]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }
    if(n==2)
    {
    if(hotel[1][1]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [1][1]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[1][1]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }
    if(n==3)
    {
    if(hotel[1][2]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [1][2]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[1][2]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }
    if(n==4)
    {
    if(hotel[1][3]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [1][3]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[1][3]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }if(n==5)
    {
    if(hotel[1][4]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [1][4]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[1][4]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*10000;
    }
    }
}
if(m==3)
{

    cout<<"please select a room number (1-5)";
    cin>>n;
    if(n==1)
    {
    if(hotel[2][0]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [2][0]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[2][0]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }
    if(n==2)
    {
    if(hotel[2][1]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [2][1]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[2][1]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }
    if(n==3)
    {
    if(hotel[2][2]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [2][2]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[2][2]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }
    if(n==4)
    {
    if(hotel[2][3]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [2][3]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[2][3]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }if(n==5)
    {
    if(hotel[2][4]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [2][4]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[2][4]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }
}
if(m==4)
{
    {

    cout<<"please select a room number (1-5)";
    cin>>n;
    if(n==1)
    {
    if(hotel[3][0]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [3][0]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[3][0]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }
    if(n==2)
    {
    if(hotel[3][1]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [3][1]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[3][1]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }
    if(n==3)
    {
    if(hotel[3][2]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [3][2]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[3][2]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }
    if(n==4)
    {
    if(hotel[3][3]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [3][3]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[3][3]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }if(n==5)
    {
    if(hotel[3][4]==1)
    {
        cout<<"Sorry the room is already booked , Please choose another "<<endl;
    }
    else if(hotel [3][4]==0)
    {
        cout<<"room booked successfully"<<endl;
        hotel[3][4]=1;
        cout<<"For how many days do you want the room ?"<<endl;
        cin>>day;
        day1=day1+day;
        cost=cost+day1*6000;
    }
    }
}

}


}



if(ch=='B' || ch=='b')
{
 for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(hotel[i][j]==0)
            {
            cout<<"-\t";
            }
            else if(hotel[i][j]==0)
            {
                cout<<"*\t";
            }
        }
        cout<<"\n";
        
    }

}
if(ch=='C' || ch=='c')
{
   cout<<"program exited succesfully ";
  exit(0);
}

 cout<<"Your Total cost for "<<day<<" days is "<<cost<<endl;


return 0;
}