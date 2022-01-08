#include<iostream>
using namespace std;
class A{
    protected:
    int m;

};
class B:public A{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"Enter value m from base class A and a from inherited class B : "<<endl;
        cin>>m>>a;
        cout<<"The values of m and a respectively are : "<<m<<" "<<a<<endl;
        cout<<"The sum of a and m is : "<<m+a<<endl;
    }
};
class C: public A{
    protected:
    int b;
    public:
    void input()
    {
        cout << "Enter value m from base class A and b from inherited class C"<<endl;
        cin>>m>>b;
        cout << "The values of m and b respectively are : " <<m<<" "<<b<<endl;
    }
};
class D:public A{
    protected:
    int c;
    public:
    void input()
    {
        cout << "Enter value m from base class A and c from inherited class D "<<endl;
        cin>>m>>c;
        cout << "The values of m and c respectively are : " << m << " " << c << endl;
        cout<<" m * c is : "<<m*c<<endl;
    }
};
int main()
{
    B ob1; C ob2; D ob3;
    ob1.input();
    ob2.input();
    ob3.input();
}