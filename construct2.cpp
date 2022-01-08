#include<iostream>
using namespace std;
class Num{
    int a , b;
    public:
    void show()
    {
        cout<<a<<" "<<b;
    }
    Num(int , int);
};
Num::Num(int p , int q)
{
    a = p; 
    b = q;
    cout<<"constructor called "<<endl;
}
int main()
{
    Num N  = Num(2,3);//explicit
    N.show();
    //implicit call
    Num X(4,5);
    X.show();
}