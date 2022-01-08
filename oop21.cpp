#include<iostream>
using namespace std;
class student{public : string name ; public : int roll; public : int marks;
public:
void input(){
    cout<<"\nEnter name : "<<endl;
    getline(cin,name);
    cout<<"\nEnter roll no : "<<endl;
    cin>>roll;
    cout<<"\nEnter marks : "<<endl;
    cin>>marks;
}
void output(){
    cout<<name<<" "<<roll<<" "<<marks<<" "<<endl;
}

};
int main()
{
    student s;
    s.input();
    cout<<"\nNAME"<<" "<<"ROLL"<<" "<<"MARKS";
    cout<<"\n-----------------------"<<endl;
    s.output();
    
}

