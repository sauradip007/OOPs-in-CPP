#include<iostream>
using namespace std;
int max(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1 ; j < n; j++)
        {
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    return arr[n-1];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int c = max(arr, n);
    cout<<"Max element is : "<<c<<endl;
    return 0;
}