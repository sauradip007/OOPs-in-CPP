#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a[n];
    int b[n];
    for(int i = 0; i < n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++){
        int temp = a[a[i]];
        a[a[i]] = b[i];
        b[i] = temp;
        cout<<b[i];
 

    }
}