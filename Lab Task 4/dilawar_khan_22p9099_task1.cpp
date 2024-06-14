#include <iostream>
using namespace std;
class Account
{
string name;
int balance;

public:
int DepositAmount(int amount)
{
    balance=balance+amount;
}
int withdrawAmount(int amount)
{
    if(balance>amount)
    {
        balance=balance-amount;
    }
    else
    {
        cout<<"cannot withdraw\n Not enough balance in account "<<endl;
    }
}
void setName(string Name)
{
  name=Name;
}
void setBalance(int Balance)
{
     balance=Balance;
}
string getName()
{
    return name;
}
 int getBalance()
 {
    return balance;
 }

};

Account createAccount()
{
   string name;
   int balance;
   Account a1;

   cout<<"Please enter your name "<<endl;
   getline(cin,name);
   cout<<"Please enter your balance"<<endl;
   cin>>balance;
   a1.setName(name);
   a1.setBalance(balance);

   return a1;
}
int main()
{
    Account a=createAccount();
   int x;
   int amount;
   while(x!=4)
   {
   cout<<"         PLEASE CHOOSE AN OPERATION"<<endl;
   cout<<"1- Display Balance "<<endl;
   cout<<"2- Deposit Amount "<<endl;
   cout<<"3- Withdraw Amount"<<endl;
   cout<<"4- Exit "<<endl;
   cin>>x;
   if(x==1)
   {
      cout<<"Your current Balance is "<<a.getBalance()
      <<endl;

   }
   else if(x==2)
   {
     cout<<"Enter the amount you want to deposit"<<endl;
     cin>>amount;
     a.DepositAmount(amount);
   }
   else if (x==3)
   {
    cout<<"Enter the amount you want to withdraw "<<endl;
    cin>>amount;
    a.withdrawAmount(amount);
   }
   }


   return 0;
}