#include<iostream>
using namespace std;
class Base
{
    int a;
    static int b;

public:
    virtual void func1(void){};
};
int main()
{
    cout<<sizeof(Base)<<endl;
    T *p = new T[10];
    delete p;
}