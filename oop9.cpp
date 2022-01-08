#include<iostream>
using namespace std;
class student { public: string name ; public: int roll ; public: string branch; public : float cgpa;
void input();
void output();
};
void student:: input(){
    cout<<"Enter name : "<<endl;
    getline(cin,name);
    cout<<"\nEnter roll : "<<endl;
    cin>>roll;
    cout<<"\nEnter branch : "<<endl;
    getline(cin,branch);
    cout<<"\nEnter cgpa : "<<endl;
    cin>>cgpa;
}
void student::output(){
cout<<name<<" "<<roll<<" "<<branch<<" "<<cgpa;
}
int main()
{
    student s;
    s.input();
    s.output();
}