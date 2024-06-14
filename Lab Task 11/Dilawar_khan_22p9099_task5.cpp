#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;
    public:
    Complex(int real=0,int imag=0)
    {
        setData(real,imag);
    }
    void setData(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    friend void operator++(Complex &c1,int);
    friend  Complex operator+(Complex c1,Complex c2);


};
     void operator++(Complex &c1,int)
    {
        c1.real++;
        
    }
     Complex operator+(Complex c1,Complex c2)
    {
        Complex temp;
        temp.real=c1.real+c2.real;
        temp.imag=c1.imag+c2.imag;
        return temp;
    }

int main()
{ 
    Complex c1(1,2);
    Complex c2(3,4);
    c1++;
    c1.display();
    Complex c3=c1+c2;
    c3.display();
}