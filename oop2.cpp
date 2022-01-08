#include<iostream>
using namespace std;
class student{public : char name[50] ; public : int roll; public : int marks;};
int main(){
    student s1;
    cin>>s1.name;
    cout<<s1.name<<endl;
    cin>>s1.roll;
    cout<<s1.roll<<endl;
    cin>>s1.marks;
    cout<<s1.marks<<endl;
}