#include<iostream>
using namespace std;
int main(){
int s;
    cin>>s;
    int e;
    cin>>e;
    int w;
    cin>>w;
    int c;
    for(int i = s ; i <= e; i+=w){
         c = (((i - 32)*5)/9);
        cout<<i<<" "<<c<<endl;
    }
}