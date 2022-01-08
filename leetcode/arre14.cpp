#include<iostream>
using namespace std;
int max (int a[] , int n)
{
    int p;
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++){
             if(a[j] < a[i])
             {
                 int temp  = a[j];
                 a[j] = a[i];
                 a[i] = temp;
             }
        }
    }
    p = n*0.05;
    return a[p] + a[n-p];
}

int main()
{
    int n;
    int m;
    int sum = 0;
    cin>>n;
    int a[n];
    for(int i =0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    m = max(a,n);
    
    for(int i = 0; i < n ; i++)
    {
        sum += a[i];

    }
    sum = sum - m;
    int mean = sum /(n-2);
    cout<<mean<<endl;


}