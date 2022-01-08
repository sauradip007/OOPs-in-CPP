#include<iostream>
using namespace std;
class Num{
    int x;
    public:
    Num()
    {

    }
    Num(int k)
    {
        x = k;
    }
    Num(Num& N)
    {
        x = N.x;
    }
    void output()
    {
        cout<<"x is : "<<x<<endl;
    }
};
int main()
{
    Num N1(20);
    Num N2(N1);
    N1.output();
    N2.output();
}