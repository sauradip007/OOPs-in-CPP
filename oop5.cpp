#include<iostream>
using namespace std;
class dist { public : int feet  ;  int inches;};
int main()
{
    dist d1;
    dist d2;
    dist d3;
    cout<<"\nEnter distance in feet : " <<endl;
    cin>>d1.feet;
    cin>>d2.feet;
    cout<<"\nEnter distance in inches : "<<endl;
    cin>>d1.inches>>d2.inches;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches  + d2.inches;
    cout<<d1.feet<<" "<<d1.inches;
    cout<<d2.feet<<" "<<d2.inches;
    cout<<d3.feet<<" "<<d3.inches;
    return 0;

}