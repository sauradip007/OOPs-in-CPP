#include<iostream>
using namespace std;
class fact{
    public:
    int n;
    void getno()
    {
        cout<<"Enter number : "<<endl;
        cin>>n;
    }
    int getfact()
    {
        int p = 1;
        for(int i = 1 ; i <= n ; i++){
            p *= i;
        }
        return p;
    }
};
int main()
{
    fact ob;
    ob.getno();
    int result  = ob.getfact();
    cout<<"The factorial is given by : "<<result<<endl;
}