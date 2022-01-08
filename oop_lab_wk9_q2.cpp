#include<iostream>
using namespace std;
class complex{
    public:
    int real,imaginary;
    public:
    complex()
    {
    
    }
    complex(int p , int q)
    {
        cout<<"enter p : "<<endl;
        cin>>p;
        cout<<"enter q : "<<endl;
        cin>>q;
        real = p;
        imaginary = q;


    }
    void show()
    {
        cout<<"The complex number is : "<<real<<"+"<<" "<<"i"<<imaginary<<endl;
    }
    complex operator + (complex  ob1 )
    {
        complex obj;
        obj.real = real + ob1.real;
        obj.imaginary = imaginary + ob1.imaginary;
        return obj;

    }
};
int main()
{
    int p,q;
    complex c1(p,q), c2(p,q), c3;

    c3 = c1 + c2;
    c3.show();

}