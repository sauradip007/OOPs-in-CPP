#include<iostream>
using namespace std;
class Circle{
    public:
    int r;
    public:
    void getr()
    {
        cout<<"Enter r"<<endl;
        cin>>r;
    }
    public:
    void area()
    {
        cout<<3*5*5<<endl;
    }

};
class Sphere:public Circle{
    public:
    void area()
    {
        cout<<3*5*5*5<<endl;
    }
};
int main()
{
    Sphere s;
    s.area();
}