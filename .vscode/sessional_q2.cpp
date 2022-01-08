#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l, b;
    public:
    Rectangle()
    {
        l = 0;
        b = 0;
    }
    Rectangle(int p, int q)
    {
        l = p;
        b = q;
    }
    Rectangle(int r)
    {
        l = r;
        b = r;
    }
    void area()
    {
        cout<<"The area is : "<<l*b<<endl;
    }
};
int main()
{
    int p,q;//for constructor 2
    cout<<"Enter p and q "<<endl;
    cin>>p>>q;
    Rectangle a(p,q);//construct 1
    a.area();
    Rectangle b;
    b.area();
   
    int r;
    cout<<"Enter r same value : "<<endl;
    cin>>r;
    Rectangle c(r);//same value
    c.area();


}