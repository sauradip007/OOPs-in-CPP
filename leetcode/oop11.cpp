#include<iostream>
using namespace std;
int main()
{
    int* p = new int(10);
    
    delete p;
    cout<<*p<<endl;
    return 0;
}