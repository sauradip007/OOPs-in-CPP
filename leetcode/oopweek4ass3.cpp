#include<iostream>
using namespace std;
float r , h , l , b ;
class are{
    public:
    void getside()
    {
        cout<<"enter radius of sphere : "<<endl;
        cin>>r;
        cout<<"enter radius and height of cylinder : "<<endl;
        cin>>r>>h;
        cout<<"enter base and height of cuboid : "<<endl;
        cin>>l>>b>>h;
    }
    void area(float radius)
    {
        float A = ((4*(radius*radius*radius))/3);
        cout<<"The area of sphere is : "<<A<<endl;
    }
    void area(float base , float height)
    {
        float A = 2*3.14*base*height;
        cout<<"The area of cylinder is : "<<A<<endl;
    }
    void area(float length , float breadth , float height)
    {
        float A = l*b*h;
        cout<<"The area of cuboid is : "<<A<<endl;
    }
};
int main()
{
    are ob;
    ob.getside();
    ob.area(r);
    ob.area(r,h);
    ob.area(l,b,h);
}