#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
string str;
fstream journal;
char ch;
int x;
while(1)
{
cout<<"Please select an option "<<endl;
cout<<"1- Add an entery to the journal"<<endl;
cout<<"2- Display journal "<<endl;
cout<<"3- Exit"<<endl;
cin>>x;
if(x==1)
{
journal.open("journal.txt",ios::out| ios::app);
cout<<"Enter the text you want to write in the journal "<<endl;
getline(cin>>ws,str);
journal<<str<<endl;
journal.close();
}
else if (x==2)
{
    journal.open("journal.txt",ios::in);
    if(!journal)
    {
        cout<<"The file 'Journal.txt' does not exist"<<endl;
        
    }
    else 
    {
        while(!journal.eof())
        {
            journal.get(ch);
            cout<<ch;
        }
        journal.close();
    }
}
else if(x==3)
{
    cout<<"File exited successfuly!!"<<endl;
    return 0;
}
else{
    cout<<"Invalid Input "<<endl;
}

}

return 0;
}