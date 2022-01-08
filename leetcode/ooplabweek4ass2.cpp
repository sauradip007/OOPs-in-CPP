


#include<iostream>
using namespace std;
float r , l , b , bas,h;//declaring global variable
class are{
    public:
    
    //r denotes radius for circle,l & b sides of rectangle and x,y,x are that of a triangle
    void getside()
    {
        cout<<"enter radius of circle : "<<endl;
        cin>>r;
        cout<<"enter length and breadth : "<<endl;
        cin>>l>>b;
        cout<<"enter base and height of triangle : "<<endl;
        cin>>bas>>h;
    }
    void area(float radius)//circle
    {
        float A = 3.14*(radius*radius);
        cout<<"The area of circle is : "<<A<<endl;
    }
    void area(float length, float breadth)//retangle
    {
        float A = (length*breadth);
        cout<<"The area of rectangle is : "<<A<<endl;
    }
    void area(float base , float height, float half)//triangle
    {
        float A = (half)*(base*height);
        cout<<"The area of triangle is : "<<A<<endl;
    }
};
int main()
{

   are ob;
   ob.getside();
   ob.area(r);
   ob.area(l,b);
   ob.area(bas,h,0.5);
}
    