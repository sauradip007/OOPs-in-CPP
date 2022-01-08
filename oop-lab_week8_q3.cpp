#include<iostream>
using namespace std;
class account{
    public:
    string name;
    public:
    int ac;
    public:
    float balance;
    public:
    void getacc()
    {
        cout<<"\nEnter name : "<<endl;
        cin>>name;
        cout<<"\nEnter account no : "<<endl;
        cin>>ac;
        cout<<"\nEnter balance : "<<endl;
        cin>>balance;
    }
    void showacc()
    {
        cout<<"\n---------------------\n"<<endl;
        cout<<"\nName : "<<name<<endl;
        cout<<"\nAccount no : "<<ac<<endl;

    }

};
class savings: public account{
    public:
    float savings;
    public:
    void getsavings()
    {
        cout<<"\nEnter amount to be withdrawn : "<<endl;
        cin>>savings;

    }
    void showsavings()
    {
        if(savings < balance && savings >= 1250.5)
        {
            balance = balance - savings;
            cout<<"The leftover balace is : "<<balance-savings<<endl;
        }
        else{
            cout<<"\nThe money could not be withdrawn"<<endl;
            cout<<"\nThe balance is : "<<balance<<endl;
            
        }
    }
};
class current: public savings{
    public:
    float current;
    void getcurr()
    {
        cout<<"\nEnter current amount : "<<endl;
        cin>>current;
    }
    void showcurr()
    {
        balance = current - balance;
        cout<<"\nThe overdue amount is : "<<balance<<endl;
    }

};
int main()
{
    // savings s;
    // current c;
    // c.getacc();
    // c.getcurr();
    // s.getacc();
    // s.getsavings();
    // c.showacc();
    // c.showcurr();
    // s.showacc();
    // s.showsavings();
    current c;
    c.getacc();
    c.getsavings();
    c.getcurr();
    c.showacc();
    c.showsavings();
    c.showcurr();
}
