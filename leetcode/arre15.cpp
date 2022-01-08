#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int d;
    int distance = 0;
   
    cin>>d;
    int a[n];
    int b[m];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
     for(int i = 0 ; i < m ; i++)
    {
        cin>>b[i];
    }
    int  i , j;
    i = 0;j = 0;
    double r;
    while(i < n && j < m)
    {
        r = abs(a[i] - a[j]);
        if(r <= d){
            cout<<a[i]<<" ";
            d++;

        }
    }cout<<endl;
    j++;
    

}
i++;
cout<<d<<endl;