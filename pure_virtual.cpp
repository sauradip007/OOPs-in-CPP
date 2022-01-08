#include<iostream>
using namespace std;
class Base{
    public:
    void print()
    {
        cout<<"PRINT - BASE CLASS"<<endl;
    }
    virtual void show() = 0;//defining PURE virtual function Base is an abstract class
};
class Derived: public Base{
    public:
    void print()
    {
        cout<<"PRINT - DERIVED CLASS"<<endl;
    }
    void show()
    {
        cout<<"SHOW - DERIVED CLASS"<<endl;
    } //redefining derived class pure virtual function as a virtual function
};
int main()
{
    Base *bptr;
    Derived D;
    bptr = &D;
    bptr->print();
    bptr->show();


}