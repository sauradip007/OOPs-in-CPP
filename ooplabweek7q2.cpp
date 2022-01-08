#include<iostream>
using namespace std;
class A{
    static int p;
    public:
    void input();
    static void display();
};
int A::p;
void A::input()
{
    p++;
}
void A::display()
{
    cout<<"The number of times object called is : "<<p<<endl;
}
int main()
{
    A ob1,ob2,ob3;
    ob1.input();
    A::display();
    ob2.input();
    A::display();
    ob3.input();
    A::display();
}