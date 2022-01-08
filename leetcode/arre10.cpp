#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == 1){
                a[i][j] == 0;
            }
            else if(a[i][j] == 0)
            {
                a[i][j] == 1;
            }
            cout<<a[i][n-j-1]<<" ";
        

         }cout<<endl;
         
        }
        
    }
    
