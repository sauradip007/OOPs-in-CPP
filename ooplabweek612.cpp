#include<iostream>
using namespace std;
class complex{
    int* real ; int* imaginary;
    public:
    void show()
    {
        cout<<"The number is : "<<real<<"+"<<"i"<<imaginary<<endl;

    }
    complex(int r , int i)//dynamic
    {
        real = new int;
        imaginary = new int;
        
        *real = r;
        *imaginary = i;

    }
    void display()
    {
        cout<<"The number is : "<<*real<<"+"<<*imaginary<<"i"<<endl;
    }
    ~complex()
    {
        delete real;
        delete imaginary;
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    int r,i;
    cout<<"Enter real : "<<endl;
    cin>>r;
    cout<<"Enter imaginary : "<<endl;
    cin>>i;
    complex d(r,i);
    d.display();


}