#include<iostream>
using namespace std;
class N{
    public:
    int a;
    int b;
    N()
    {
        a=0;
        b=0;
    }
    N(int p, int q)
    {
        a=p;b=q;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    void operator --()
    {
        a = -a;
        b = -b;
    }
};
int main()
{
    N ob1, ob2(3,4);
    --ob1;
    --ob2;
    ob1.show();
    ob2.show();
}