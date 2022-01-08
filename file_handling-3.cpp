#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile;
    char s[100];
    outfile.open("string");
    for(int i = 0; i < 10; i++)
    {
        cout<<"Enter string "<<i+1<<" : "<<endl;
        cin>>s;
        outfile<<"\n"<<s<<endl;
    }
    outfile.close();
    ifstream inpfile("string");
    for (int i = 0; i < 10; i++)
    {
        inpfile >> s;
       
        cout << "\nString " << i + 1 << " : ";
        cout << " " << s <<" ";
             
    }
    inpfile.close();
}