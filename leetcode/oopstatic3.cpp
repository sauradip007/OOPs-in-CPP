#include<iostream>
using namespace std;
int a = 11;
class A{
    public:
    int a ; public: static int a;
    public:
    void geta()
    {
        cout<<"enter a : ";
        cin>>a;
    }
    void output()
    {
        cout<<"a = "<<a<<endl;
    }
   

};
int A::a;

int main()
{
    A ob;
    ob.geta();
    ob.output();
    cout<<"static  = "<<A::a<<endl;
    cout<<"global = "<<a<<endl;
    ob.geta();
    ob.output();
}