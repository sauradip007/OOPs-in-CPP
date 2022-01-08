#include<iostream>
using namespace std;
class student{public : string name ; public : int roll; public : int sub[5];
public:
void input(){
cout<<"\nEnter name : "<<endl;
getline(cin,name);
cout<<"\nEnter roll no : "<<endl;
cin>>roll;
for(int i = 0; i < 5; i++){
cout<<"enter marks out of 100: "<<endl;
cin>>sub[i];
}
}
void output(){
    float sum = 0.0;
    float percentage;
     for(int i = 0; i < 5 ; i++){
     sum += sub[i];
         
        cout<<" "<<sub[i]<<endl;
      
    }
    cout<<"NAME"<<" "<<" "<<"ROLL"<<endl;
    cout<<"-------------------"<<endl;
    cout<<" "<<name<<" "<<roll<<endl;
    percentage = (sum/500)*100;
    cout<<"The total marks scored is : "<<sum<<endl;
    cout<<"The percentage is : "<<percentage<<"%"<<endl;
}};
int main()
{
    student s;
    s.input();
    s.output();
}