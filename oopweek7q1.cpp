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
     A(int p)
{
    a = p;
    
    
    order++;
    cout<<"The parameter constructor has been called for object"<<" "<<order<<endl;
    cout<<"The order is : "<<order<<endl;
}
   A(A &ob)
{
    a = ob.a;
   
    
    order++;
    cout<<"The copy constructor has been called for the object"<<" "<<order<<" "<<endl;
    cout<<"The order is : "<<order<<endl;
}
    ~A()
    {
        
        order++;
        cout<<"\nDestructor has been called for object"<<order<<" "<<endl;
        cout<<"The order is : "<<order<<endl;
    }
};

int main()
{
    int p;
    cout<<"enter p : "<<endl;
    cin>>p;
    A ob1(p);
    A ob2 = ob1;
    int q;
    cout<<"enter q : "<<endl;
    cin>>q;
    A ob3(q);
    A ob4 = ob3;
    ob1.show();
    ob2.show();

}