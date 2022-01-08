#include<iostream>
using namespace std;
class swapint;
class A{
    int x,y;
    public:
    void getdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void output()
    {
        cout<<x<<y;
    
    }
    friend class swapint;
};
class swapint{
    
};