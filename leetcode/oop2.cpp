#include<iostream>
using namespace std;

class dist {private : int feet ; private: int inches; public:
void getdistance(){
    cout<<"\nEnter feet : "; cin>>feet;
    cout<<"\nEnter inches : ";cin>>inches;
}
void showdistance(){
    cout<<"The distance in feet is : "<<feet<<endl;
    cout<<"\nThe distance in inches is : "<<inches<<endl;
}
void add(distance , distance);
{
    inches = d2.inches + d3.inches;
    feet = 0;
    if(inches >= 12){
        inches -= 12;
        feet++;
    }
    feet+= d2.feet + d3.feet;
}};
    





int main()
{
    dist d1 , d2 , d3;
    d1.getdistance();
    d2.getdistance();
    d3.add(d1,d2);
    cout<<"\nd1 = "<<d1.showdistance;
    cout<<"\nd2 = "<<d2.showdistance;
    cout<<"\nd3 = "<<d3.showdistance;
    

}