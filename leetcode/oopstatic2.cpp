#include<iostream>
using namespace std;
class B{
    private:
    static int c;
    static void count()
    {
        c++;
    }
    public:
    static void output()
    {
        count();
        cout<<"c = "<<c<<endl;
    }
};
int B::c; //c initialised to 0
main()
{
    B ob;
    B::output(); //1
    B::output(); //2
    ob.output();//3
    ob.output();//4

}