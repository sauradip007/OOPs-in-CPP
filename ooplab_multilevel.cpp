#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of a : "<<endl;
        cin>>a;
    }
    void output()
    {
        cout<<"Value of a from base class A is : "<<a<<endl;
    }
};
class B:public A{
    protected:
    int b;
    public:
    void input2()
    {
        cout<<"Enter the value of b : "<<endl;
        cin>>b;
    }
    void output2()
    {
        cout<<"The value of b inherited from base class A is : "<<b<<endl;
    }
};
class C:public B{
    private:
    int c;
    public:
    void input3()
    {
        cout<<"Enter the value of c : "<<endl;
        cin>>c;
    }
    void output3()
    {
        cout<<"The value of c inherited from class B is : "<<c<<endl;
    }
};
// A
// |
// V
// B
// |
// V
// C
int main()
{
    C ob;
    ob.input();
    ob.input2();
    ob.input3();
   
    ob.output();
    ob.output2();
    ob.output3();
}