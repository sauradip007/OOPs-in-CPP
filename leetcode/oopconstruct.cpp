#include<iostream>
using namespace std;

class Num{
    int n;
    public:
    Num()
    {


    }
    Num(int  k)
    {
        n = k;
    }
    Num(Num &ob)
    {
        n = ob.n;
    }
    void output()
    {
        cout<<"n is : "<<n<<endl;
    }
};
int main()
{
    Num ob1(20);//20
    Num ob2(ob1);
    Num ob3 = ob2;
    Num ob4;
    ob4 = ob1;
    ob1.output();
    ob2.output();
    ob3.output();
    ob4.output();
}