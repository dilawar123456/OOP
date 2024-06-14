#include <iostream>
#include <vector>
using namespace std;
class Item
{
    string name;
    double price;
    public:
    friend ostream& operator<<(ostream&os, Item I1 )
    {
        os<<I1.name<<"-- RS "<<I1.price<<endl;
        return os;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setPrice(double price)
    {
        this->price=price;
    }
    string getname()
    {
        return name;
    }
    double getPrice()
    {
        return price;
    }

};
void display(vector<Item> v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
    
}
int main()
{
    Item i1;
    vector<Item> vec1;
    string name;
    double price;
    int x;
    int position;
    
    while(x!=6)
    {
        cout<<"___________________________"<<endl;
        cout<<"ENTER A CHOICE"<<endl;
        cout<<"1) Add Items"<<endl;
        cout<<"2) Remove Items "<<endl;
        cout<<"3) clear Cart "<<endl;
        cout<<"4) Exchange Product "<<endl;
        cout<<"5) Display "<<endl;
        cout<<"6) Exit "<<endl;
        cin>>x;

        if(x==1)
        {
            cout<<"Enter name of item "<<endl;
            getline(cin>>ws,name);
            cout<<"Enter price of item "<<endl;
            cin>>price;
            i1.setName(name);
            i1.setPrice(price);

            vec1.push_back(i1);

        }
        else if(x==2)
        {
            cout<<"SELECT A POSITION TO REMOVE"<<endl;
            display(vec1);
            cin>>position;
            vector<Item>::iterator iter=vec1.begin();
            vec1.erase(iter+position);


        }
        else if(x==3)
        {
   
           
            vec1.clear();
            cout<<"Cart Cleared"<<endl;
        }
        else if(x==4)
        {
            display(vec1);
            cout<<"Enter the position you want to exchange "<<endl;
            cin>>position;
            cout<<"Enter the name of new item "<<endl;
            getline(cin>>ws,name);
            cout<<"Enter the price of new item "<<endl;
            cin>>price;
            i1.setName(name);
            i1.setPrice(price);
             vector<Item>::iterator iter=vec1.begin();
            vec1.erase(iter+position);
            vec1.insert(iter+position,i1);

        }
        else if(x==5)
        {
        
            display(vec1);
        }

    }
    



}