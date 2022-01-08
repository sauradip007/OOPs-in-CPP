#include<iostream>
using namespace std;
int main()
{
int n;
int sum;
cin>>n;
int arr[n];
int runningSum[n];
for(int i =0 ; i < n  ; i ++){
    cin>>arr[i];
}
for(int i = 0 ; i < n  ; i++){
     sum += arr[i];
     runningSum[i] = sum;
     cout<<runningSum[i];
}

return 0;
}