#include<iostream>
using namespace std;
class E{
    public:
    string name;
    public:
    int id;
    public:
    float salary;
    virtual void get()
    {
        cout<<"Enter emp name : "<<endl;
        cin>>name;
        cout<<"Enter id : "<<endl;
        cin>>id;
        // cout<<"Enter salary : "<<endl;
        // cin>>salary;
    }
    virtual void show()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        // cout<<"Salary : "<<salary<<endl;
       

    }
};
class regular:public E{
    public:
    float DA,HRA,basic;
    void get()
    {
        cout<<"Enter DA : "<<endl;
        cin>>DA;
        cout<<"Enter HRA : "<<endl;
        cin>>HRA;
        cout<<"Enter basic sal : "<<endl;
        cin>>basic;
    }
    void show()
    {
        salary = DA + HRA + basic;
        cout<<"The total regular salary is : "<<salary<<endl;
    }
};
class part:public E{
    public:
    int h,pph;
    void get()
    {
        cout<<"Enter hours worked : "<<endl;
        cin>>h;
        cout<<"Enter pay per hour : "<<endl;
        cin>>pph;
    }
    void show()
    {
        salary = h*pph;
        cout<<"The total salary part time is : "<<salary<<endl;
    }

};
int main()
{
    E B,*bptr;
    regular R;
    part P;
    //base first
    bptr = &B;
    bptr->get();
    bptr->show();
    //reg
    bptr = &R;
    bptr->get();
    bptr->show();
    //part
    bptr = &P;
    bptr->get();
    bptr->show();
}