#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int k = 2*n;
    int arr[2*n];
    int res[2*n];
    for(int i = 0 ; i < 2*n ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < 2*n ; i++)
    {
        if(i % 2 == 0)
        {
            res[i] = arr[i/2];
        }
        else{
            res[i] = arr[n+i/2];
        }
        
        
    }
    for(int i = 0 ; i < 2*n ; i++)
    {
        cout<<res[i]<<" ";
    }cout<<endl;
        
}