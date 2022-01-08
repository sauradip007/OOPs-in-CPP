#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int sum = 0;
    int finSum;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            if(i == j){
                sum += a[i][i] + a[j][j];
            }
        
        }
    }
    finSum = sum - a[n/2][n/2];
    cout<<sum<<endl;
}