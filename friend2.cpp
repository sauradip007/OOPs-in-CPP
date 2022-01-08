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
    void output()
    {
        cout<<"x = "<<x<<endl;
    }
    friend void swap(A&, B&);
};
class B{
    int y;
    public:
    void input(int p)
    {
        y = p;
    }
    void output()
    {
        cout<<"y = "<<y<<endl;
    }
friend void swap(A&, B&);
};
void swap( A& ob1 , B& ob2)
{
    int temp;
    temp = ob1.x;
    ob1.x = ob2.y;
    ob2.y = temp;
}
int main()
{
    A ob1 ; B ob2;
    ob1.input(6);
    ob2.input(7);
    ob1.output();
    ob2.output();
    swap(ob1, ob2);
    ob1.output();
    ob2.output();
}