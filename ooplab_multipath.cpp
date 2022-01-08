#include<iostream>
using namespace std;
class A{
    protected:
    int a;
};
class B: public virtual A{
    protected:
    int b;
};
class C:public virtual A{
    protected:
    int c;
};
class D: public B, public C{
    protected:
    int x;
    public:
    void input()
    {
        cout<<"Enter a b c x where a belongs to A base class and b and c belong to classes B and C inherited from A and d inherits from b and c: "<<endl;
        cin>>a>>b>>c>>x;
        cout<<"The values of a b c and x respectively are : "<<a<<" "<<b<<" "<<c<< " "<<x<<endl;

    }
};
int main()
{
    D ob;
    ob.input();
}