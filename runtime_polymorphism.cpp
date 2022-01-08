#include<iostream>
using namespace std;
class Base{
    public:
    virtual void display()
    {
        cout<<"Base"<<endl;
    }
    virtual void show()
    {
        cout<<"Base class"<<endl;
    }
};
class Derived: public Base{
    public:
    void display()
    {
        cout<<"derived"<<endl;
    }
    void show()
    {
        cout<<"Derived class"<<endl;
    }
};
int main()
{
    Base B;
    Derived D;
    Base * bptr;
    bptr = &B;
    bptr->show();
    bptr->display();
    bptr = &D;
    bptr->show();
    bptr->display();
}