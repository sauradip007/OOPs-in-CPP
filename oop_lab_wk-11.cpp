#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b : "<<endl;
    cin>>a>>b;
    int x = a/b;
    try{
         if (b == 0)
        {
            throw(b);
        }
        else
        {
            cout<<"The result x is : "<<x<<endl;
        }
       
      
    }
    catch (int i)
    {
        cout << "Exception caught " << endl;
    }
}