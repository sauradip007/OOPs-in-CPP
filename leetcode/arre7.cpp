#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int count  = 0;
    for(int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    int start = 0;
    int end = n;

        while(start < end){
           
            start++;
            end--;
             if(a[start] == a[end]){
                
                count++;
               
             }
        }
        cout<<count;
    return 0;

}