#include<iostream>
using namespace std;
class time{
    int h,m;
    public:
    time()
    {
        h = 0;
        m  = 0;
    }
    time(int p, int q)
    {
        h = p;
        m = q;
    }
    friend time & operator++(time & ob)
    {
        if(ob.m >= 60)
        {
            int t = ob.m;
            int count = t/ 60;
            ob.m = ob.m - 60;
           
            ob.h = ob.h + count;
        }
        else{
        ob.m = ob.m + 1;
        }
        return ob;
    }
    void display()
    {
        cout<<h<<":"<<m<<endl;
    }
};
int main()
{
    time ob(6,66);
    ++ob;
    ob.display();
}