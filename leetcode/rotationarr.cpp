#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter k : "<<endl;
    int k;
    cin>>k;
    int count = 0;
    for(int i = 0 ; i < n; i++)
    {
        
        while(count <= k)
        {
            count++;
            
            int temp = arr[i];
            arr[i] = arr[i+k];
            arr[i+k] = temp;
        }
        
    }
  for(int j = 0 ; j < n ; j++)
  {
      cout<<arr[j]<<" ";
  }cout<<endl;
}