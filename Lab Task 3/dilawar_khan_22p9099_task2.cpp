#include <iostream>
using namespace std;
struct StudentData
{
string name;
int marks[3];
};

void Display_data(StudentData student[]);
void change_marks(StudentData student[]);
void Calc_Avg_Marks(StudentData student[]);

int main ()
{
StudentData student[2];

int x;

for (int i=0;i<2;i++)
{
    cout<<"Please enter student"<<i+1<<" name" <<endl;
    getline(cin,student[i].name);
    for(int j=0;j<3;j++)
    {
        cout<<"Please enter marks "<<j+1<<endl;
        cin>>student[i].marks[j];
        cin.ignore();
    }
}
while(x!=4)
{cout<<"\n------------------------------------";
cout<<"     \nPlease choose an operation "<<endl;
cout<<"1- Display Student Data "<<endl;
cout<<"2- Calculate Average Marks "<<endl;
cout<<"3- Change Marks "<<endl;
cout<<"4- Exit Program "<<endl;
cin>>x;
if (x==1)
{
  Display_data(student);
   
}
else if(x==2)
{
   Calc_Avg_Marks(student);
}
else if(x==3)
{
     change_marks(student);
}
}

}

void Display_data(StudentData student[])
{
    
    for(int i=0;i<2;i++)
    {
        cout<<"\n-------------------------"<<endl;
        cout<<"\nStudent"<<i+1<<" name is "<<student[i].name;
        for(int j=0;j<3;j++)
        {
         cout<<"\nStudent marks"<<j+1<<" is "<<student[i].marks[j];
        }
    }

}

void change_marks(StudentData student[])
{int choice;
     cout<<"Enter the Student You Want to Change Marks OF (1-2) : ";
cin>>choice;
int i;


    cout<<"Enter the Subject You want to change Marks of (1-3) : ";
    cin>>i;
    cout<<"Enter the New Marks : ";
    cin>>student[choice-1].marks[i-1]; 
}
void Calc_Avg_Marks(StudentData student[])
{
    float avg=0;
   int i;
   cout<<"Choose the student you want to find average of (1-2) ";
   cin>>i;
   avg=(student[i-1].marks[0]+student[i-1].marks[1]+student[i-1].marks[2])/3;

   cout<<"The average of marks of student"<<i+1<<" is "<<avg;

}