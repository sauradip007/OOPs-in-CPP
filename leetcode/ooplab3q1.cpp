#include<iostream>
using namespace std;
class distf{
    public:
    float feet, inches;
    void getdistf()
    {
        cout<<"Enter dist in feet : "<<endl;
        cin>>feet;
        cout<<"Enter dist in inches : "<<endl;
        cin>>inches;
    }

};
class distc{
    public:
    float meter , centi;
    void getdistc()
    {
        cout<<"Enter dist in m : "<<endl;
        cin>>meter;
        cout<<"Enter dist in cm : "<<endl;
        cin>>centi;
    }
};
void compare(distf d1, distc d2)
{
    distc d3;
    distf d4;
    d3.meter= (d2.meter*3.28);
    d3.centi = (d2.centi*0.393);
    
    if(d3.meter > d1.feet)
    {
        cout<<"d2 is larger"<<endl;
    }
    else if( d3.centi > d1.inches && d3.meter > d1.feet){
        cout<<"d2 is larger"<<endl;
    }
    else if(d3.centi > d1.inches && d3.meter < d1.feet){
        cout<<"d1 is larger"<<endl;
    }
    else if (d3.centi < d1.inches && d3.meter<d1.feet)
    {
        cout<<"d1 is larger"<<endl;
    }
    else if (d1.feet>d3.meter)
    {
        cout<<"d1 is larger"<<endl;
    }



}
int main()
{
    distf d1;
    distc d2;
    d1.getdistf();
    d2.getdistc();
    compare(d1,d2);
    
    

}
