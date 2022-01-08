#include<iostream>
using namespace std;
class shape{
    public:
    float r,a,l,b;
    virtual void show(){
        cout<<"This is the base class " <<endl;
    }
};
class circle : public shape{
    public:
    float r;
    public:
    void getr()
    {
        cout<<"Enter radius : "<<endl;
        cin>>r;

    }
    void show()
    {
        cout<<"The area of circle is : "<<3.14*r*r<<endl;
    }
};
class square: public shape{
    public:
    int a;
    public:
    void gets()
    {
        cout<<"Enter value of side of square : "<<endl;
        cin>>a;
    }
    void show()
    {
        cout<<"The area of square is : "<<a*a<<endl;
    }
};
class triangle: public shape{
    public:
    void gett()
    {
        cout<<"Enter the value of l and b : "<<endl;
        cin>>l>>b;
    }
    void show()
    {
        cout<<"The area of triangle is : "<<0.5*l*b<<endl;

    }
};
int main()
{
    shape O,*bptr;
    circle C;
    square S;
    triangle T;
    C.getr();
    S.gets();
    T.gett();
    bptr = &O; //base class
    bptr->show();
    bptr = &C; //pointer points to derived circle obj
    bptr->show();
    bptr = &S;
    bptr->show();
    bptr = &T;
    bptr->show();



}
