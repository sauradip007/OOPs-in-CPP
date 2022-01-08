#include<iostream>
using namespace std;
template<class T1, class T2>
class data{
    public:
    data()
    {
        T1 a; T2 b;
        cout<<"Enter value of a : "<<endl;
        cin>>a;
        cout<<"Enter value of b : "<<endl;
        cin>>b;
        cout<<"a = " <<a<<endl;
        cout<<"b = "<<b<<endl;

    }
};
int main()
{
    data<int,float>h;
    data<char,int>i;
}