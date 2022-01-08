#include<iostream>
using namespace std;
class dist{public: int feet ;public: int inches;
public:

void getdist()
{
    cout<<"\nEnter distance in feet : ";
    cin>>feet;
    cout<<"\nEnter inches : ";
    cin>>inches;
}

dist add(dist d1,dist d2){
    dist d3;
    
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    return d3;
    
}};
int main()
{
    dist d1,d2,d3;
    d1.getdist();
    d2.getdist();
    d3 = d3.add(d1,d2);
    cout<<"\ndist1 = "<<d1.feet<<" '"<<d1.inches;
    cout<<"\ndist2 = "<<d2.feet<<" '"<<d2.inches;
    cout<<"\ndist3 = "<<d3.feet<<" '"<<d3.inches;

    cout<<endl;
}