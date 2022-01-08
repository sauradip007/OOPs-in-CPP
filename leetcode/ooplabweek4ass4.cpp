#include<iostream>
using namespace std;
class S{
    public:
    int a,sq,cub;
    public:
    void get();
    void square();
    void cube();
};
inline void S::get()
{
    cout<<"Enter a : "<<endl;
    cin>>a;

}
inline void  S::square()
{
    sq = a*a;
    cout<<"The square of a is : "<<sq<<endl;

}
inline void S::cube()
{
    cub = a*a*a;
    cout<<"The cube of a is : "<<cub<<endl;
}
int main()
{
    S ob;
    ob.get();
    ob.square();
    ob.cube();
}