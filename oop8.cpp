#include<iostream>
using namespace std;
class integer{ public : int a,b;
public:
int input(int, int );
void output();
};
int integer :: input(int p, int q){
    a = p;
    b = q;
}
void integer :: output(){
    cout<<a<<b<<endl;
    
}
int main()
{
    integer i;
    i.input(2,3);
    i.output();
    return 0;
}
