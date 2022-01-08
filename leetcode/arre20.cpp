#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int target[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        cin>>target[i];
    }
    bool p;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i ; j < n ; j++)
        {
            for(int k = j ; k >= i ; k--)
            {
                if(arr[k] == target[i]){
                    p = true;
                }
                else{
                    p = false;
                }
            }
        }
    }
    if(p){
        cout<<"Yes"<<endl;
    }
    else if (!p){
        cout<<"No"<<endl;
    }
}