#include<iostream>
using namespace std;
class apnacollege{public:
void fun()
{
    cout<<"I am a function with no arguments "<<endl;
}
void fun(int x){
    cout<<"\nI am a function with int argument"<<endl;
}
void fun(double x){
    cout<<"\nI am a function with double argument"<<endl;
}};
int main()
{
    apnacollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    
}