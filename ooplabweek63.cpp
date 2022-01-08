#include<iostream>
using namespace std;
class time{
    int hh ; int min;
    public:
    void show()
    {
        if(hh > 12)
        {
            hh = hh-12;
            }
            if(min > 60)
        {
            min = min - 60;
            hh = hh+1;
            
            
        }
        if(hh == 0)
        {
            hh = 00;
            
        }
        cout<<"The time is "<<hh<<":"<<min<<endl;
        
        

        
    }
    time();//default
    time(int r , int i)//parameterised
    {
          
            hh = r;
            min = i;
    }
    time(time &ob)//copy
    {
        hh = ob.hh;
        min = ob.min;

    }
    ~time();
};
time::time()
{
    cout<<"Enter value of hour : "<<endl;
    cin>>hh;
    cout<<"Enter value of minutes : "<<endl;
    cin>>min;
    cout<<"Constructor is called"<<endl;
}
time::~time()
{
    cout<<"Destructor is called"<<endl;
}
int main()
{
    time c1;
    int r , i;
            cout<<"Enter value of hours : "<<endl;
            cin>>r;
            cout<<"Enter value of minutes : "<<endl;
            cin>>i;
    time c2(r,i);
    time c3(c1);
    c1.show();
    c2.show();
    c3.show();
}