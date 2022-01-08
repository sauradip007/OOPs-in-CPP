#include<iostream>
using namespace std;
class complex{
    int real ; int imaginary;
    public:
    void show()
    {
        cout<<"The number is : "<<real<<"+"<<"i"<<imaginary<<endl;

    }
    complex();//default
    complex(int r , int i)//parameterised
    {
          
            real = r;
            imaginary = i;
    }
    complex(complex &ob)//copy
    {
        real = ob.real;
        imaginary = ob.imaginary;

    }
    ~complex();
};
complex::complex()
{
    cout<<"Enter value of real : "<<endl;
    cin>>real;
    cout<<"Enter value of imaginary : "<<endl;
    cin>>imaginary;
    cout<<"Constructor is called"<<endl;
}
complex::~complex()
{
    cout<<"Destructor is called"<<endl;
}
int main()
{
    complex c1;
    int r , i;
            cout<<"Enter value of real : "<<endl;
            cin>>r;
            cout<<"Enter value of imaginary : "<<endl;
            cin>>i;
    complex c2(r,i);
    complex c3(c1);
    c1.show();
    c2.show();
    c3.show();
}