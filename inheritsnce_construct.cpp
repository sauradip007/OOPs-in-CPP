#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    A(int p)
    {
        x = p;
        cout<<"x ="<<x<<endl;
    }
};
class B:public A{
    protected:
    int y;
    public:
    B(int c , int d):A(c)
    {
        y = d;
        cout<<"y ="<<y<<endl;
    }
};
int main()
{
    B ob(2,3);
}