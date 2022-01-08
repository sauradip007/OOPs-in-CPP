#include<iostream>
using namespace std;
class Base{
    public:
    void print()
    {
        cout<<"BASE CLASS"<<endl;
    }
};
class Derived:public Base{
    public:
    void print()
    {
        cout<<"Derived class"<<endl;
    }
};
int main()
{
    //making base ptr
    Base B,*bptr;
    Derived D, *dptr;
    bptr = &B;
    bptr->print();

    bptr = &D;
    bptr->print();

    dptr = &D;
    dptr->print();
}