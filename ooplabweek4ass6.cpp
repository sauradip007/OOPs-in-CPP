#include<iostream>
using namespace std;

class S{

    public:
    
    void swap(int &, int &);
};
void S::swap(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping : "<<"a = "<<a<<" "<<"b = "<<b<<endl;

}

int main()
{
    int a = 5 , b = 10;
    S ob;
    
    ob.swap(a,b);

}