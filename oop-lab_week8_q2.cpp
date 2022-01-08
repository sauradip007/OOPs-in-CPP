#include<iostream>
using namespace std;
class emp{
    public:
    string name;
    public:
    int id;
    public:
    float salary;
    void getemp()
    {
        cout<<"\nEnter name : "<<endl;
        cin>>name;
        cout<<"\nEnter employee id : "<<endl;
        cin>>id;

    }
    void showemp()
    {
        cout<<"\n---------------------\n"<<endl;
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
    }
};
class regular: public emp{
    public:
    float DA, HRA, basic;
    public:
    void getreg()
    {
        cout<<"\nEnter DA HRA and basic salaries respectively : "<<endl;
        cin>>DA>>HRA>>basic;
    }
    void showreg()
    {
        cout<<"\n---------------------\n"<<endl;
        salary = DA + HRA + basic;
        cout<<"\nThe total salary working full time is : "<<salary<<endl;
    }

};
class part: public emp{
    public:
    int h; 
    public:
    float pph; //pay per hour
    public: 
    void getpart()
    {
        cout<<"\nEnter total hours and pay per hour respectively : "<<endl;
        cin>>h>>pph;
    }
    void showpart()
    {
        cout<<"\n---------------------\n"<<endl;
        salary = h*pph;
        cout<<"\nThe total salary of a part time employee : "<<salary<<endl;
    }
};
int main()
{
    regular r;
    part p;
    r.getemp();
    r.getreg();
    p.getemp();
    p.getpart();
    r.showemp();
    r.showreg();
    p.showemp();
    p.showpart();
}