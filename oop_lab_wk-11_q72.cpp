#include<iostream>
using namespace std;
void multiple()
{
    int x;
    cout<<"Enter x : "<<endl;
    cin>>x;
    if(x == 0)
    {
        throw x;//int
    }
    if(x == 0)
    {
        throw 'x';//char
    }
    if(x==-1)
    {
        throw 1.5;
    }
}