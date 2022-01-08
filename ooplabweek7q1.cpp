#include<iostream>
using namespace std;
class A{
    public:
    int a , b,order = 0;
    public:
    void show()
    {
        cout<<a<<" "<<b;
    }
   A(int p , int q)
{
    a = p;
    b = q;
    cout<<"The constructor has been called"<<endl;
    order++;
    cout<<"The order is : "<<order<<endl;
}
    ~A()
    {
        cout<<"\nDestructor has been called"<<endl;
        order++;
        cout<<"The order is : "<<order<<endl;
    }
};

int main()
{
    int p,q;
    cout<<"Enter value of p : "<<endl;
    cin>>p;
    cout<<"Enter value of q : "<<endl;
    cin>>q;
    A ob = A(p,q);
    ob.show();

}