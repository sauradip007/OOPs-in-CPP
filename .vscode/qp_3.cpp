#include<iostream>
using namespace std;
class Distance{
    public:
    int feet;
    int inches;
    public:
    void getdis()
    {
        cin>>feet>>inches;

    }
    Distance add(Distance& d1, Distance& d2)
    {
        Distance d3;
        d3.feet = d1.feet + d2.feet;
        d3.inches = d1.feet + d2.feet;
        return d3;

    }
    void adding(Distance& d1, Distance& d2)
    {
        d1.feet = d1.feet + d2.feet;
        d2.inches = d1.inches + d2.inches;

    }
};