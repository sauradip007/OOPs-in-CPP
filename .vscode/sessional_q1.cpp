#include<iostream>
using namespace std;
// int main()
// {
//     int a,b;
//     cout << "Enter a and b " << endl;
//     cin>>a,b;
    
//     int x = a/b;
//     try{
//         if(b!=0)
//         {
//             cout<<"result is : "<<x<<endl;
//         }
//         else{
//             throw(b);
//         }
//     }
//     catch(int x)
//     {
//         cout<<"Exception caught , division not possible"<<endl;
//     }
// }
void divide(int a , int b)
{
    if(b == 0)
    {
        // throw("Divide by 0 exception");
        throw(b);
    }
    else{
        int res = a/b;
        cout<<"Result is : "<<res<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"\nEnter a"<<endl;
    cin>>a;
    cout<<"\nEnter b : "<<endl;
    cin>>b;
    try{
        divide(a,b);
    }
    catch(int b)
    {
        cout << "Divide by 0 exception" << endl;
    }
}