#include<iostream>
using namespace std;
template<typename T, typename V>
class Pair{
    public:
    T x;
    V y;
};
int main()
{
    Pair<float,char>p;
    cout<<"Enter float type variable : "<<endl;
    cin>>p.x;
    cout<<"Enter char type variable : "<<endl;
    cin>>p.y;
    cout<<"The values of x and y are respectively : "<<p.x<<" "<<p.y<<endl;
}