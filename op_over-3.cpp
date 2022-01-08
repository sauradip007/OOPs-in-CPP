#include<iostream>
using namespace std;
class dist{
    int km,m;
    public:
    dist()
    {
        km = 0;
         m= 0;
    }
    dist(int p , int q)
    {
        km = p;
        m = q;
    }
    friend dist &operator++(dist &ob)
    {
        if (ob.m >= 1000)
        {
            ob.m = 1000 - ob.m;
            int count = ob.m / 1000;
            ob.km = ob.km + count;
        }
        ob.km = ob.km + 1;
        ob.m = ob.m + 1;
     
        return ob;
    }
    void show()
    {
        cout<<km<<"km"<<" "<<m<<"m"<<" "<<endl;
    }
    
    // friend distance & operator --(distance&);
};
// friend distance &operator++(distance &)
// {

// }
int main()
{
    dist ob(5,200);
    ++ob;
    ob.show();
}