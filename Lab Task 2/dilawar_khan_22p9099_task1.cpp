#include <iostream>
#include<cstring>
using namespace std;
int password(char enter[50]);
int main()
{
    string name;
    char enter[50];
    cout<<"Please enter your name :"<<endl;
    getline(cin,name);
    cout<<"Please choose a password :"<<endl;
   cin.get(enter,50);

    password(enter);

    


}
int password(char enter[50])
{
int len=strlen(enter);
int compare;
char confirm[50];
int flag=0;
if (len>=8)
{
  for(int i=0;i<50;i++)
  {
   if(enter[i]=='%' || enter[i]=='!' || enter[i]=='*' ||enter[i]=='^' || enter[i]=='&')
   {
    flag=1;
     
   }

  }
  if (flag==1)
  {
     cout<<"PLease enter your password again to confirm :"<<endl;
     getchar();
    cin.get(confirm,50);
     compare=strcmp(enter,confirm);
     if(compare==0)
    {
        cout<<"Password Confirmed Succesfully ";
    }
    else 
    {
        cout<<"Password does not match please enter again "<<endl;
      getchar();
    cin.get(confirm,50);
    compare=strcmp(enter,confirm);
     if(compare==0)
    {
        cout<<"Password Confirmed Succesfully ";
    } 
    else 
    {
      cout<<"Password does not match again"<<endl;
      return 0;
    }

    }
  }
  else{
    cout<<"Please enter a valid password again "<<endl;
    return 0;
  }

}
else
{
    cout<<"The password is too short "<<endl;
    cout<<"Enter a valid password again "<<endl;
    return 0;
}


return 0;
}