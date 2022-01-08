#include<iostream>
using namespace std;
class A{
    public:
    int a;
    public:
    void get();
    void inc(int);
};
void A::inc(int a)
{
    a++;
    cout<<"Increased a is : "<<a<<endl;
}
int main()
{
    A ob;
    
    ob.inc(5);
}