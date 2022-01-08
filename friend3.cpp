#include<iostream>
using namespace std;
class B;
class A{
    public:
    int a;
    public:
    void input()
    {
        cout<<"enter val of a : "<<endl;
        cin>>a;
    }
    friend void greater(A&, B&);
    };
class B{
    public:
    int b;
    public:
    void getb()
    {
        cout<<"enter val of b : "<<endl;
        cin>>b;
    }
    friend void greater(A&, B&);
};
void great(A &ob1, B &ob2)
{
    if(ob1.a > ob2.b)
    {
        cout<<"a is greater "<<endl;

    }
    else{
        cout<<"b is greater "<<endl;
    }
}
int main()
{
    A oba;
    B obb;
    oba.input();
    obb.getb();
    great(oba,obb);

}