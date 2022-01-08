#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int nums1[n];
    int nums2[m];
    
    for(int i = 0 ; i < n ; i++)
    {
        cin>>nums1[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin>>nums2[i];
    }
    int i = 0 , j = 0;
    while(i < n && j < m){
        if(nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j]){
            j++;
        }
        else{
            cout<<nums2[j]<<" ";
            i++;
            j++;
        }
    }
}