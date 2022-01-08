#include<iostream>
using namespace std;
class student{public : string name ; public : int roll; public : int sub[5];};
int main()
{ //taking total marks in each sub as 100
    student s1;
    getline(cin,s1.name);
    cin>>s1.roll;
    float sum = 0.0;
    float percentage;
    for(int i = 0; i < 5; i++){
        cin>>s1.sub[i];
         }
    for(int i = 0; i < 5 ; i++){
     sum += s1.sub[i];
         
        cout<<s1.name<<" "<<s1.roll<<" "<<s1.sub[i]<<endl;
      
    }
    percentage = (sum/500)*100;
    cout<<"The total marks scored is : "<<sum<<endl;
    cout<<"The percentage is : "<<percentage<<"%"<<endl;

    


}