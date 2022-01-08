#include<iostream>
using namespace std;
//hierarchial inheritance
class shape{
    public:
   float r; 
   public: 
   float b, h , l,br;
   public:

};
class circle:public shape{
    public:
    void getradius()
    {
        cout << "\nEnter radius of circle : " << endl;
        cin >> r;
    }
    void area1()
    {
        cout<<"\nThe area of circle is : "<<3.14*r*r<<endl;
    }
};
class triangle: public shape{
    public:
    void gettriangle()
    {
        cout << "\nEnter base and height of triangle respectively : " << endl;
        cin >> b >> h;
    }
    void area2()
    {
        cout<<"\nThe area of triangle is : "<<0.5*b*h<<endl;
    }
};
class rectangle: public shape{
    public:
    void getrec()
    {
        cout << "\nEnter length and breadth of rectangle respectively : " << endl;
        cin >> l >> br;
    }
    void area3()
    {
        cout<<"\nThe area of the rectangle is : "<<l*br<<endl;
    }
};
int main()
{
    circle c;
    triangle t;
    rectangle r;
    c.getradius();
    t.gettriangle();
    r.getrec();
    c.area1();
    t.area2();
    r.area3();
}