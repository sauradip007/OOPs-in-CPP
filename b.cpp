#include<iostream>
using namespace std;
    int main(){
int N;
    cin>>N;
    int d=1;
    int sum = 0;
    while(d <= N ){
    if(d % 2 == 0){
        sum+= d;
    }
    d++;
        
        
    }
    cout<<sum<<endl;
}