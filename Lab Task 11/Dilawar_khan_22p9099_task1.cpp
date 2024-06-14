#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;
    friend Complex addComplex(Complex c1,Complex c2);
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

};
Complex addComplex(Complex c1,Complex c2)
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
    Complex c3= addComplex(c1,c2);
    c3.display();

    
}