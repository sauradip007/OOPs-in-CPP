#include<iostream>
using namespace std;
class data
{
    int x;
    float f;
    public:
    data()
    {
        x = 10;
        f = 0;
    }
    data(float m)
    {
        x =2; f =m;
    }
    

operator int()
{
    return x;
}
operator float()
{
    return f;
}
void show()
{
    cout<<x<<" "<<f<<endl;
}
};
int main()
{
    int i;
    float q;
    data ob;
    ob = 5.5;
    i = ob; //base to int type, ob.x = 2 and ob.f =5.5
    q = ob; //conversion to float 
    cout<<i<<" "<<q<<endl;
     

}