#include<iostream>
#include<string.h>
using namespace std;
class C;
class B;
class A
{
    char* s;
    int size1;
    public:
    void gets1()
    {
        cout<<"Enter length of string 1 : "<<endl;
        cin>>size1;
        size1 = strlen(s);
        s = new char[size1+1];
        cin>>s;
    }
    void dis1()
    {
        cout<<s;
    }
    friend class C;
    friend void add(A& , B&);
};
class B{
    char *p;
    int size2;
    friend class C;
    public:
    void gets2()
    {
        cout<<"Enter length of string 2 : "<<endl;
        cin>>size2;
        size2 = strlen(p);
        p = new char[size2+1];

        cin>>p;
    }
    friend void add(A& , B&);
    
};
class C{
    public:
    
    void gets1(A &a)
    {
        cout<<"Enter string 1 : "<<endl;
        cin>>a.s;
    }
    void gets2(B &b)
    {
        cout<<"Enter string 2 : "<<endl;
        cin>>b.p;
    }
    void add(A &a, B &b)
    {
        strcat(a.s, b.p);
        cout<<a.s<<endl;
    }
   
};
int main()
{
    A a;
    B b;
    C c;
    c.gets1(a);
    c.gets2(b);
    c.add(a,b);
    

}