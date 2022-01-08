#include<iostream>
using namespace std;
class N{
    int a, b;
    public:
    N()
    {
    
    }
    N(int p , int  q)
    {
        a =p;
        b = q;

    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
        N operator + (N ob)
        {
            N obj;
            obj.a = a + ob.a;
            obj.b = b + ob.b;
            return obj;
        }
    
};
int main()
{
    N ob1(2,3),ob2(4,5),ob3;
    ob3 = ob1 + ob2; //ob1.operator + (ob2)
    ob3.show();
}