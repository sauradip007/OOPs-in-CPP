#include<iostream>
using namespace std;
class dist{
    public:
    int feet, inches;
    void getfeet()
    {
        cout<<"Enter dist in feet : "<<endl;
        cin>>feet;
    }
    void getinches()
    {
        cout<<"Enter dist in inches : "<<endl;
        cin>>inches;
    }
    dist add(dist);
    dist comp(dist d1 , dist d2)
    {
        d1 add(d2);

    }

};
dist dist::add (dist d2){
    dist temp;
    temp.inches = inches + d2.inches;
    if(temp.inches >= 12)
    {
        temp.inches -= 12;
        temp.feet = 1;
    }
    temp.feet += feet + d2.feet;
    return temp;

}



int main()
{

}