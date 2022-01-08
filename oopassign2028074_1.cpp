#include<iostream>
using namespace std;
class time{ public : int hrs ; public: int minutes; public: int secs;
public:
void input()
{
    cout<<"Enter hours : "<<endl;
    cin>>hrs;
    cout<<"\nEnter minutes : "<<endl;
    cin>>minutes;
    cout<<"\nEnter seconds : "<<endl;
    cin>>secs;
}
void output(){
    

    if(hrs > 12){
        if(minutes > 60){
            hrs++;
            minutes = minutes - 60;
        }
        if(secs > 60)
        {
            minutes++;
            secs = secs -60;
        }
    cout<<"\nThe time is "<<hrs<<":"<<minutes<<":"<<secs<<"pm"<<endl;
    }
    else if( hrs < 12)
    {
         if(minutes >= 60){
            hrs++;
            minutes = minutes - 60;
        }
        if(secs >= 60)
        {
            minutes++;
            secs = secs -60;
        }

        cout<<"\nThe time is "<<hrs<<":"<<minutes<<":"<<secs<<" "<<"am"<<endl;

    }
}};
int main()
{
    time t;
    t.input();
    t.output();
    return 0;
}