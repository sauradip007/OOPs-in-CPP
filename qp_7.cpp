#include<iostream>
using namespace std;
class Base{
    public:
    void print()
    {
        cout<<"PRINT - BASE CLASS"<<endl;
    }
    virtual void show()
    {
        cout<<"SHOW - BASE CLASS"<<endl;
    }
};
class Derived:public Base{
    public:
    void print()
    {
        cout<<"PRINT - DERIVED CLASS"<<endl;
    }
    void show()
    {
        cout<<"SHOW - DERIVED CLASS"<<endl;
    }
};
int main()
{
    Base B, *bptr;
    Derived D;
    bptr = &B;
    bptr->print();
    bptr->show();
    
    bptr = &D;
    bptr->print();
    bptr->show();
}