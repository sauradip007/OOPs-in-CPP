#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int i;
    char name[10];
    float sal;
    ofstream outfile;
    outfile.open("text");
    if(!outfile)
    {
        cout<<"File could not be opened"<<endl;
    }
    for(int i = 0 ; i < 3 ;i++)
    {
        cout<<"Enter salary of employee "<<i+1<<" : ";
        cin>>name>>sal;
        outfile<<"\n"<<name<<"\t"<<sal;
    }
    outfile.close();
    ifstream inpfile("text");
    for(int i = 0; i < 3 ; i++)
    {
        inpfile>>name;
        inpfile>>sal;
        cout<<"\nEmployee "<<i+1<<" : ";
        cout<<" "<<name<<" "<<"Salary : "<<sal;
    }
    inpfile.close();
}