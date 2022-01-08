#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[2*n];
for(int i = 0 ; i <(2*n) ; i++)
{
    cin>>a[i];
}
for(int i = 0 ; i < n ; i++){
    for(int j = n; j < 2*n ; j++){
        int temp = a[i+1];
        a[i+1] = a[j];
        a[j] = temp;
    }
}

 }
}