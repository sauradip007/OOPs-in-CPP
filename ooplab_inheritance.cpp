#include<iostream>
using namespace std;
class A{
    public:
    int x;
};
class B: public A{
    public:
    int y;
};
int main()
{
    B b;
    cout<<"\nEnter value of x belonging to base class A : "<<endl;
    cin>>b.x;
    cout<<"\nEnter value of y belonging to inherited class B : "<<endl;
    cin>>b.y;
    cout<<"Value of x and y are : "<<b.x<<" "<<b.y<<endl;
}
