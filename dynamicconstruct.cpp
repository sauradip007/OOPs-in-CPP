#include<iostream>
using namespace std;
class D{
    int *p;
    public:
    D()
    {
        p = new int;
        *p = 5;
    }
    D(int v)
    {
        p = new int;
        *p = v;
    }
    int display()
    {
        return *p;

    }
    ~D()
    {
        delete p;
    }
};
int main()
{
    D ob1;//default
    cout<<ob1.display()<<endl;
    D ob2(7);//parameterised
    cout<<ob2.display()<<endl;

}