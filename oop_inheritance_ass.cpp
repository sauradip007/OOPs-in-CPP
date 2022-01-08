#include<iostream>
#include<string>
using namespace std;
class student{
    protected:
    string section ; string name ;int age;int roll;
    public:
    void get1()
    {
        cout<<"Enter section : "<<endl;
        getchar();
        getline(cin,section);
        cout<<"Enter roll : "<<endl;
        cin>>roll;
        cout<<"Enter name : "<<endl;
        getchar();
        getline(cin,name);
        cout<<"Enter age: "<<endl;
        cin>>age;

    }
};
class marks{
    protected:
    float sub1,sub2,sub3;
    public:
    void get2()
    {
        cout<<"Enter marks of sub1 , sub2 and sub3 respectively : "<<endl;
        cin>>sub1>>sub2>>sub3;
    }
};
class result:public student , public marks{
    public:
    void display()
    {
        cout<<"NAME : " <<name<<" "<<"AGE : "<<age<<" "<<"ROLL NO : "<<roll<<" "<<"SECTION : "<<section<<" "<<"TOTAL MARKS : "<<sub1+sub2+sub3<<" "<<"AVERAGE MARKS : "<<(sub1+sub2+sub3)/3<<endl;
    }
};
int main()
{
    result ob;
    ob.get1();
    ob.get2();
    ob.display();
}