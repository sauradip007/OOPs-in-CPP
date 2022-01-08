#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int i;
    char name[10];
    float sal;
    ofstream outFile("Employee");
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<<"Enter names of emp : "<<endl;
        cin>>name>>sal;
        outFile<<"\n"<<name<<"\t"<<sal;
    }
    outFile.close();
    ifstream inpFile("Employee");
    for(int i = 3 ; i >=0 ; i--)
    {
        inpFile>>name;
        inpFile>>sal;
        cout<<"\nEMPLOYEE"<<" ";
        cout<<name<<"\t"<<sal;
    }
    inpFile.close();
}