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
    return arr[n-1]*arr[n-2];
}


int min(int arr[] , int n){
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
    return arr[0]*arr[1];
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    int b,c;
    for(int i = 0; i < n ; i++){
        cin>>a[i];
    }
    
    
    b = max(a,n);
    c = min(a,n);

    
    int product = b-c;
    cout<<product<<endl;
}