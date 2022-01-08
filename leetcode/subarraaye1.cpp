#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    int mx = INT_MIN;
    int  i = 0 ; int j = 0 ; //i denotes start and j end of the window
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    while(j < n)
    {
        sum+=arr[j];
        if(j-i+1 < k)
        {
            j++;
        }
        else if(j-i+1 == k)
        {
            mx = max(mx,sum);
            sum = sum - arr[i];
            i++;
            j++;
            

        }
    }
    cout<<"Max subarray average  is : "<<mx/k<<endl;

}