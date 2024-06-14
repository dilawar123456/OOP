#include <iostream>

#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
char input[100];
char ch;
int len;
int count=0;
char input2[100];
char output[200];
cout<<"Please enter the string :"<<endl;
cin.get(input,100);
cout<<"         Please choose any operation    "<<endl;
cout<<"A) Count the number of vowels in the string"<<endl;
cout<<"B) Count both the vowels and consonants in the string"<<endl;
cout<<"C) Display the most frequent character in the string"<<endl;
cout<<"D) Concatenate another string with the existing string"<<endl;
cout<<"E) Exit the program"<<endl;
cin>>ch;
if (ch =='A'||ch=='a')
{
    len=strlen(input);
    for(int i=0;i<len;i++)
    {
       if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u')
       {
       count++;
       }
    }
     cout<<"The number of vowels are "<<count<<endl;
}
if (ch=='B' || ch=='b')
{
    len=strlen(input);
    cout<<"The total number of vowels and consonants are "<<len<<endl;
}
if(ch=='D' || ch=='d')
{
    cout<<"Enter the other string to concatenate :";
    getchar();
    cin.get(input2,100);
    cout<<" "<<strcat(input,input2);
    
}
if (ch=='E' || ch=='e')
{
    cout<<"Program exited successfully "<<endl;
    return 0;
}





}