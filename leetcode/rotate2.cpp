#include<iostream>
#include<numeric>
using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
void rotate(int arr[] , int n , int k)
{
    int d,i, temp,j;
    for(i = 0; i < gcd(n,k); i++)
    {
        j=i;
        temp = arr[i];
        while(1){
            d = (j+k)%n;
            if(d==i)
            break;
            arr[j] = arr[d];
            j = d;

        }
        arr[j] = temp;
    }
}
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
   
     rotate(arr,n,k);
     for(int i = 0 ; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}