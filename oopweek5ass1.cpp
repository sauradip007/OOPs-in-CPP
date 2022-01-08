#include<iostream>
using namespace std;
class B;
class A{
    public:
    float ft , inches;
    public:
    void getdist()
    {
        cout<<"enter dist in feet : "<<endl;
        cin>>ft;
        cout<<"enter dist in inches : "<<endl;
        cin>>inches;

    }
    friend A add (A,B);
    void show()
    {
        cout<<"The dist is : "<<ft<<"feet"<<"and"<<" "<<inches<<"inches"<<endl;
    }
};
class B{
    public:
    float m, cm;
    public:
    void get()
    {
        cout<<"Enter dist in m : "<<endl;
        cin>>m;
        cout<<"Enter dist in cm : "<<endl;
        cin>>cm;

    }
    friend A add(A,B);
    friend void comp(A& , B&);

};
void comp(A &ob1, B &ob2)
{
    float f = (ob1.ft) + 0.083*(ob1.inches);//converting to ft
    float m = 3.28*(ob2.m + 0.01*(ob2.cm));//converting to meter and finally to ft
    if(f > m)
    {
        cout<<"A is greater "<<endl;
    }
    else{
        cout<<"B is greater "<<endl;
    }
   
}  
int main()
{
    A ob1;
    B ob2;
    ob1.getdist();
    ob2.get();
   
    comp(ob1,ob2);

}