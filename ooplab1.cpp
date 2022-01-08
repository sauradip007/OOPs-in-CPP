#include<iostream>
using namespace std;
class student {public : string a;};
int main(){
    student s1;
    getline(cin,s1.a);
    cout<<"hello"<<" "<<s1.a<<endl;
    return 0;
}
