/*Sauradip Sengupta
Branch: CSSE
Roll No: 2028074*/

//ASSIGNMENT 2 OOP

#include<iostream>
#include<string.h>
using namespace std;
class B;
class C;
class A{
    private:
    char *s ; int size1;
    public:
    void geta()
    {
        cout<<"Enter length of string 1 : "<<endl;
        cin>>size1;
        size1;
        s = new char[size1+1];
        cout<<"Enter string 1 : "<<endl;
        cin>>s;

    }
    friend class C;
    friend void add(A&,B&);

};
class B{
    private:
    char* p ; int size2;
    public:
    void getb()
    {
        cout<<"Enter length of string 2 : "<<endl;
        cin>>size2;

        p = new char[size2+1];
        cout<<"Enter string 2 : "<<endl;
        cin>>p;

    }
    friend class C;
    friend void add(A&,B&);
};
class C{
    public:
    void add(A &a, B &b)
    {
        strcat(a.s, b.p);
        cout<<"After concatenation"<<" "<<a.s<<endl;
        delete[]a.s;
        delete[]b.p;
    }

};
int main()
{
    A a;
    B b;
    C c;
    a.geta();
    b.getb();
    c.add(a,b);

}