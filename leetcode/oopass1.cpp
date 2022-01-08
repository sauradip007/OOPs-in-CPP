#include<iostream>
using namespace std;
class dis{
    public:
    int a;
    void geta()
    {
        cout<<"The numbers are : "<<endl;
        for(int i = 10 ; i > 0 ; i--)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    dis ob;
    ob.geta();
}