#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void show()
    {
        for(int i = 1 ; i <= 150 ; i++)
        {
            if(i % 2 == 0)
            {
                cout<<i<<endl;
            }
        }
    }
};
int main()
{
    A ob;
    ob.show();
    
}