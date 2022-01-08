#include<iostream>
using namespace std;
class complex{
    int r,i;
    public:
    complex()
    {
        r = 0;
        i = 0;
    }
    complex(int p, int q)
    {
        cout<<"Enter real part"<<endl;
        cin>>p;
        cout<<"Enter imaginary part"<<endl;
        cin>>q;
        r = p;
        i = q;
    }
    friend complex operator + (complex c1, complex c2)
    {
        complex c3;
        c3.r = c1.r + c2.r;
        c3.i = c1.i + c2.i;
        return c3;
    }
    void show()
    {
        cout<<r<<"+"<<i<<"i"<<endl;
    }

};
int main()
{
    int p,q;
    complex ob1(p,q),ob2(p,q),ob3;
    ob3 = ob1 + ob2;
    ob3.show();
}