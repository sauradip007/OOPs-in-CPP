#include<iostream>
using namespace std;
class N{
    int x,y;
    public:
    N()
    {
        x = 0;
        y = 0;
    }
    N(int p , int q)
    {
        x = p;
        y = q;
    }
    friend N & operator --(N &ob)
    {
        ob.x = -ob.x;
        ob.y = -ob.y;
        return ob;

    }
    void show()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    N ob(4,7);
    --ob;
    ob.show();
}