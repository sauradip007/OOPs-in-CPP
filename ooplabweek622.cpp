#include<iostream>
using namespace std;
class time{
    int* hh ; int* min;
    public:
  
    time(int r , int i)//dynamic
    {
        hh = new int;
        min = new int;
        
        *hh = r;
        *min = i;

    }
     void show()
    {
        if(*hh > 12)
        {
            hh = hh-12;
            }
            if(*min > 60)
        {
            min = min - 60;
            hh = hh+1;
            
            
        }
        if(*hh == 0)
        {
            hh = 00;
            
        }
        cout<<"The time is "<<hh<<":"<<min<<endl;
        
        

        
    }
    ~time()
    {
        delete hh;
        delete min;
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    int r,i;
    cout<<"Enter hour : "<<endl;
    cin>>r;
    cout<<"Enter minutes : "<<endl;
    cin>>i;
    time d(r,i);
    d.show();


}