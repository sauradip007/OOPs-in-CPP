#include<iostream>
using namespace std;
class A{
    private:
    int p;
    public:
    void input(int x)
    {
        p = x;
    }
    friend void output(A);//declaration
};
void output(A ob)
{
    cout<<ob.p<<endl;//accessing priv member p
}
int main()
{
    A obj;
    obj.input(5); // p becomes 5
    //obj.p = 5
    //friend function not a member func
    output(obj);
    
}