#include<iostream>
using namespace std;
class A{
    int a;
    public:
    
     virtual void show()
    {
       cout<<"A class"<<endl;
    }
};
class B: public A{
    int b;
    public:
   
    void show()
    {
        cout<<"B class"<<endl;
    }
};
int main()
{
//    B ob;
//    ob.show();
//    ob.A::show();
//    ob.B::show();
A b, *bptr;//base ptr
bptr = &b;
bptr->show();

B d,*dptr; //derived ptr

bptr = &d;//base ptr point to derived ob
bptr->show();

dptr = &d; //derived to derived
dptr->show();
}