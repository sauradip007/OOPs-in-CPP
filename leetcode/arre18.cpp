#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int count = 0;
    cin>>m>>n;
    int a[m][n];
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>a[m][n];
        }
    }
 int i = 0;
 int j = n-1;
 while( i < m && j >=0)
{
    
    if(a[i][j] == 1)
    {
        count++;
    }
    else if(a[i][j] == 0)
        j--;
        i++;
        
    }

}
 cout<<count;
    

}