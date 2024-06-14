#include <iostream>
#include <iostream>
using namespace std;
class Operations;
class Complex
{
    friend class Operations;
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

class Operations
{
    public:
Complex addComplex(Complex c1,Complex c2)
{
  Complex temp;
  temp.real=c1.real+c2.real;
  temp.imag=c1.imag+c2.imag;
  return temp;
}
Complex subtractComplex(Complex c1,Complex c2)
{
  Complex temp;
  temp.real=c1.real-c2.real;
  temp.imag=c1.imag-c2.imag;
  return temp;
}

};
int main()
{
    Complex c1(10,9);
    Complex c2(3,4);
    Complex c3;
    Operations o1;
    c3=o1.addComplex(c1,c2);
    c3.display();
    c3=o1.subtractComplex(c1,c2);
    c3.display();
    


}