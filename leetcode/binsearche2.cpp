#include<iostream>
using namespace std;
int binse( int arr[] , int n , int key)
{
    int l = 0;
    int h = n;
    int mid = (l+h)/2;
    
    while( l <= h)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if ( arr[mid] > key)
        {
            h = mid-1;
        }
        else{
            l = mid+1;
        }
        
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binse(arr,n,key)<<endl;
    return 0;
}
