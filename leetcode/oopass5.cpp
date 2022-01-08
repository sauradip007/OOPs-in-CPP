#include<iostream>
#include<math.h>
using namespace std;
class overload{
    public:
    float a,b,c,l,b,r1,r2,r3,h;
    public:
    void getside(){
        cout<<"\n Enter sides of the triangle : "<<endl;
        cin>>a>>b>>c;
        cout<<"\n Enter sides of the rectangle(length and breadt respectively): "<<endl;
        cin>>l>>b;
        cout<<"\n Enter radius and height of cylinder : "<<endl;
        cin>>r2>>h;
        cout<<"\n Enter radius of the circle : "<<endl;
        cin>>r1;
        cout<<"\n Enter radius of the sphere : "<<endl;
        cin>>r3;
        

    }
    void area(float a,float b , float c)//triangle
    {
        float s = a+b+c/2;
        double A = sqrt((s-a)*(s-b)*(s-c));
        cout<<"The area of triangle is : "<<A<<endl;
        
    }
    void area(float len ,  float bre)//rectangle
    {
        
        float A  = len * bre;
       cout<<"The area of rec is : "<<A<<endl;

    }
    void area(float radius, float height) //cylinder
    {
        
        float A = (2*3.14*radius*height) + (3.14*radius*radius);
        
        cout<<"The area of cylinder is : "<<A<<endl;
    }
    void area(float rad)//circle
    {
        
        float A  = 3.14*rad*rad;
        cout<<"The area of circle is : "<<A<<endl;
        
    }
    void area()//sphere
    {
        float radi;
        float A = (4/3)*3.14*radi*radi;
        cout<<"The area of sphere is : "<<A<<endl;
    }
    


};
int main()
{
    float a,b,c,l,b,r1,r2,r3,h;
    overload ob;
    ob.getside();
    ob.area(a,b,c);
    ob.area(l,b);
    ob.area(r2,h);
    ob.area(r1);
    ob.area(r3);

}