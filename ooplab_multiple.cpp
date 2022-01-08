#include<iostream>
using namespace std;
class M
{
    protected:
    int m;
    public:
    void getM()
    {
        cout<<"Enter the value of m from base class M : "<<endl;
        cin>>m;
    }
};
class N{
    protected:
    int n;
    public:
    void getN()
    {
        cout<<"Enter value of n from base class N : "<<endl;
        cin>>n;
    }
};
class P: public N,public M
{
    public:
    void display()
    {
        cout<<"The value of m from base M is : "<<m<<endl;
        cout<<"The value of n from base N is : "<<n<<endl;
        cout<<"m * n is : "<<m*n<<endl;
    }
};
int main()
{
    P ob;
    ob.getM();
    ob.getN();
    ob.display();
}
