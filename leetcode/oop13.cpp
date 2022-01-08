#include<iostream>
using namespace std;
class A{
    private:
    int b;
    void input()
    {
        cout<<"Enter b : "<<endl;
        cin>>b;
    }
    public:
    void output(){
        input();
        
        cout<<"The value of b is : "<<b;
    }
};
int main()
{
    A ob;
    ob.output();
}