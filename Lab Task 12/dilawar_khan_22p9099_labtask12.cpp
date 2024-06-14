#include <iostream>
using namespace std;
template <class V>

class Vector
{
    V var;

public:
    Vector(V var)
    {
        this->var = var;
    }
    int CalculateDotProduct(Vector<V> var1 )
    {
       return var.CalculateDotProduct(var1.var);
    }
};

class My2DVector
{
    int x;
    int y;
    

public:

friend ostream& operator<<(ostream &os,const My2DVector & v1)
{
    os << "(" << v1.x << "," << v1.y << ")" << endl;
    return os;
}
friend istream& operator>>(istream& is,  My2DVector& v1)
    {
        is>>v1.x;
        is>>v1.y;
    }
    My2DVector(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    My2DVector()
    {
        x = 0;
        y = 0;
    }
    int CalculateDotProduct(My2DVector var1)
    {
        int temp = (this->x * var1.x) + (this->y* var1.y);
        return temp;
    }
};


class My3DVector
{
    int x;
    int y;
    int z;

public:
 friend ostream& operator<<(ostream &os,const My3DVector & v1)
{
    os << "(" << v1.x << "," << v1.y << "," << v1.z << ")" << endl;
    return os;
}
friend istream& operator>>(istream& is,  My3DVector& v1)
    {
        is>>v1.x;
        is>>v1.y;
        is>>v1.z;
    }

    My3DVector(int x , int y , int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    My3DVector()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    int CalculateDotProduct(My3DVector var1)
    {
        int temp = (this->x * var1.x) + (this->y *var1.y) + (this->z*var1.z);
        return temp;
    }
};

int main()
{
    My2DVector v12D;
    My2DVector v22D;
    My3DVector v13D;
    My3DVector v23D;
    cout<<"Enter values of 2D vector 1"<<endl;
    cin>>v12D;
    cout<<"Enter values of 2D vector 2"<<endl;
    cin>>v22D;

    cout<<"Enter values of 3D vector 1"<<endl;
    cin>>v13D;
    cout<<"Enter values of 3D vector 2"<<endl;
    cin>>v23D;
    Vector <My2DVector> v1(v12D);
    Vector <My2DVector> v2(v22D);
    Vector <My3DVector> v3(v13D);
    Vector <My3DVector> v4(v23D);
    





    cout<<"Vector : ";
    cout<<v12D;
    cout<<"Vector : ";
    cout<<v22D;
    cout<<"Dot Product Of 2D Vector : ";
    cout<<v1.CalculateDotProduct(v2)<<endl;
    cout<<"Vector : ";
    cout<<v13D;
    cout<<"Vector : ";
    cout<<v23D;
    cout<<"Dot Product Of 3D Vector : ";
    cout<<v3.CalculateDotProduct(v4);


}

