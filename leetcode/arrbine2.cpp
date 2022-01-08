#include<iostream>
using namespace std;
int binSearch(int arr[] , int n  , int key)
{
    int l = 0;
    int h = n;
    int mid = (l+h)/2;
    while(l <= h)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid] < key)
        {
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
    
}
int findPivot(int arr[] , int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[i] > arr[j])
            {
                return i;
            }
        }
    }
    return -1;
}
int search(int arr[], int n , int k)
{
    int p = findPivot(arr ,n);
    int l = 0;
    int h = n;
    while( l <= h)
    {
        if(arr[p] == k)
        {
            return p;
        }
        if(arr[p] < k)
        {
            h = 
        }
    }
    
     
}


}
int main()
{
    
}