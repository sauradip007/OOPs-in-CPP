#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n "<<endl;
    cin>>n;
    int a[n];
    int i;
    cout<<"Enter values of array : "<<endl;
    for(int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter index of value to be seen : "<<endl;
    cin>>i;
    try{
        if(i >= n)
        {
            throw(i);
                   
        }
        else{
            
               cout<< "The requuired value is : " << a[i] << endl;
        }
        
    }
    catch(int x)
    {
        cout<<"Exception caught, please enter a different value"<<endl;
    }

}