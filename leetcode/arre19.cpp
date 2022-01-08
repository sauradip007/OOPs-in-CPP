#include<iostream>
#include<climits>
using namespace std;
int maxSum(int arr[] , int n)
{
    
    int r;
    for(int i = 0 ; i < n-1; i++)
    {
        for(int j = i + 1 ; j < n; j++)
        {
            r = min(arr[i] , arr[j]);

        }
    }
    return r;
}
int main()
{
    int n;
    cin>>n;
    int nums[2*n]; 
    int arr1[n];
    int arr2[n];   
    for(int i = 0 ; i < 2*n ; i++)
    {
        cin>>nums[i];
    } 
   int s1;
   int s2;
   int i = 0;
   int j = 0;
   while(i < 2*n && j < n)
   {
       if(i <= n)
       {
           nums[i] = arr1[j];
           s1 = maxSum(arr1 , n);
           
       }
       if(i <= 2*n)
       {
           nums[i + n] = arr2[j];
           s2 = maxSum(arr2, n);
       }
       i++;
       j++;


   }
   int reqSum = s1 + s2;
   cout<<reqSum<<endl;