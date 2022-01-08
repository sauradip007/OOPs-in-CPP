#include<iostream>
using namespace std;
class first{
    public:
    int b;
    public:
     first()
    {
        b = 10;
    }
    virtual void display()=0;
};
class second: public  first
{
    public:
    int d;
    public:
    second(){
        d = 20;
    }
    void display()
    {
        cout<<"b = "<<b<<" "<<"d= "<<d<<endl;
    }
};
int main()
{
    first *p;
    second s;
    p = &s;
    p->display();
}