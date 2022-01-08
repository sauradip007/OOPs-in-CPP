#include<iostream>
using namespace std; //doubt(STL)?
int main(){
int n;
cin>>n;
int a[n]; 
int b[n];
int m = n + n;
int c[m];
int i ,j;
for( i = 0 ; i < n; i++)
{
    cin>>a[i]>>b[i];
}
for(i = 0; i <  ; i++){
    if(i < n){
        c[i] = a[i];
    }
    else{
        c[i] = b[i - n];
    }
}
for(i = 0; i < 2*n ; i++)
{
    cout<<c[i]<<',';
}cout<<endl;


return 0;
}