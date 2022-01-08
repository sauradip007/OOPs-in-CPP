#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int distance = 0;
    int d;
    cout<<"enter d : "<<endl;
    cin>>d;
    int m;
    cin>>m;
    int b[m];
    long long int r;
    
    for(int i =0 ; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i =0 ; i < m; i++)
    {
        cin>>b[i];
    }
    int i = 0;
    int j = 0;
    while(i < n && j < m)
    {
        r = abs(a[i] - b[j]);
        
        if(r <= d)
        {
            cout<<b[j]<<endl;
            distance++;
        }
        j++;
    }
    i++;
    cout<<distance<<endl;
}