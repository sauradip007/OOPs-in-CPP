#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    void input(int p)
    {
        x = p;

    }
    friend int add( A& , B&);
    
};
class B{
    int y;
    public:
    void input(int p)
    {
        y = p;
    }
    friend int add( A& , B&);
};
int add ( A& ob1 , B& ob2)
{
    int r;
    r = ob1.x + ob2.y;
    return r;
    
}
int main()
{
    A ob1; B ob2;
    ob1.input(5);
    ob2.input(7); //taking 5 and 7 as values 
    cout<<"The sum is given by : "<<add(ob1,ob2)<<endl;
}