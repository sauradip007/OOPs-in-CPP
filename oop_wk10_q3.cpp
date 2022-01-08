#include <iostream>
using namespace std;
class account
{
public:
    string name;

public:
    int ac;

public:
    int balance;

public:
     virtual void get()
    {
        cout << "\nEnter name : " << endl;
        cin >> name;
        cout << "\nEnter account no : " << endl;
        cin >> ac;
        cout << "\nEnter balance : " << endl;
        cin >> balance;
    }
    virtual void show()
    {
        cout << "\n---------------------\n"
             << endl;
        cout << "\nName : " << name << endl;
        cout << "\nAccount no : " << ac << endl;
        cout<<"\nInitial balance : "<<balance<<endl;
    }
};
class saving : public account
{
public:
    int savings;

public:
    void get()
    {
        cout << "\nEnter amount to be withdrawn : " << endl;
        cin >> savings;
    }
    void show()
    {
        if (savings < balance && savings >= 1250)
        {
            balance = balance - savings;
            cout <<"The amount : "<< savings<<" "<<"has been withdrawn" << endl;
        }
        else
        {
            cout << "\nThe money could not be withdrawn" << endl;
            cout << "\nThe balance is : " << balance << endl;
        }
    }
};
class current : public account 
{
public:
    int current;
    public:
    
    void get()
    {
        cout << "\nEnter current amount : " << endl;
        cin >> current;
    }
    void show()
    {
        
        cout << "\nThe overdue amount is : " << current-balance << endl;
    }
};
int main()
{
  account A;saving S; current C;
  A.get();
  S.get();
  C.get();
  A.show();
  S.show();
  C.show();
  
    

    
}