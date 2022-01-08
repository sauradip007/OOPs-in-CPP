#include<iostream>
using namespace std;
class A{public : int a; 
void funcA(){
    cout<<"func A\n"<<endl;
}
private:
int bl;
void funcB()
{
    cout<<"func B\n"<<endl;
}
protected:
int c;
void funcC()
{
    cout<<"func C\n"<<endl;
}



};
int main()
{
    A obj;
    obj.funcA();

}