#include<iostream>
using namespace std;
class N{
    public:
    int a[100],n;
    public:
       friend istream & operator >>(istream & input , N &ob)
    {
        cout<<"Enter size : "<<endl;
        input>>ob.n;
        for(int i = 0; i < ob.n; i++)
        {
            input>>ob.a[i];
        }
    }
    friend ostream & operator << (ostream & output, N & ob)
    {
        cout<<"The size : "<<ob.n<<endl;
        for(int i = 0; i < ob.n ; i++)
        {
            cout<<ob.a[i]<<" ";
        }cout<<endl;
        return output;
    }
    ;
 
 
    
     
};
int main()
{
    N ob1;
    cin>> ob1;
    cout<<ob1;
    
}