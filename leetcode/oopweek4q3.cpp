#include<iostream>
using namespace std;
char a = '*';
int n = 0;
class S{
    public:
    int m;char n;
    public:
    void getdata()
    {
    cout<<"Enter m , press a : "<<endl;
    cin>>m;
    cout<<"Enter n , press a : "<<endl;
    cin>>n;
if(m == 'a')
{
    cout<<"Enter no of times to be entered : "<<endl;
    cin>>n;
}
getchar();
if(n == 'a')
{
    cout<<"Enter no of characters to be printed : "<<endl;
    getchar();
    cin>>a;
}
    }
void printchar(int a , c)