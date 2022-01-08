#include<iostream>
using namespace std;
class complex{public : int real ; public : int  imaginary;};
int main()
{
    complex s[10];
    for(int i = 0 ; i < 3 ; i++){
        cin>>s[i].real;
        cin>>s[i].imaginary;
    }
    for(int i = 0; i < 10 ; i++){
        cout<<"The Complex numbers are as follows : "<<s[i].real<<"+"<<"i"<<s[i].imaginary<<endl;
    }
}