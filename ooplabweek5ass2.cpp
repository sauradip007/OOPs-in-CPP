#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    void input()
    {
        cout<<"Enter x : "<<endl;
        cin>>x;
    }
    void output()
    {
        cout<<"The final val of x is : "<<x<<endl;
    }
    friend void swap(A& , B&);
};
class B{
    int y;
    public:
    void input()
    {
        cout<<"Enter val of y : "<<endl;
        cin>>y;
    }
    void output()
    {
        cout<<"The final value of y is : "<<y<<endl;
    }
    friend void swap(A&, B&);
};
void swap(A &ob1, B &ob2)
{
    int temp = ob1.x;
    ob1.x  = ob2.y;
    ob2.y = temp;
}
int main()
{
    A a;
    B b;
    a.input();
    b.input();
    swap(a,b);
    a.output();
    b.output();
}