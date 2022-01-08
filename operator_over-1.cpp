#include<iostream>
using namespace std;
class N
{
    private:
    int a,b;
    public:
    N()
    {
        a = 0;
        b = 0;

    }
    N(int p, int q)
    {
        a = p;
        b = q;
    }
    void operator++()
    {
        ++a;
        ++b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }

};
// void operator ++(N ob)
// {
//     ++ob.a;
//     ++ob.b;
// }
int main()
{
    N ob1;
    N ob2(3,4);
    ++ob2;  
    //a=0b=0 & a = 3 & b= 4
    ++ob1; //implies ob1.operator++() gets invoked
    ob1.show();
    ob2.show();
}