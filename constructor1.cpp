#include<iostream>
using namespace std;
class Num{
    int a , b;
    public:
    int x;
    void show()
    {
        cout<<a<<" "<<b<<" "<<x<<endl;
        }
        Num();

    }
;
Num::Num()
{
    a = 10;
    b= 20;
    x = 30;
    cout<<"constructor has been called"<<endl;
}
int main()
{
    Num N1;
    Num N2,N3[5];
    N2.show();
}