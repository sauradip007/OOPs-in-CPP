#include<iostream>
using namespace std;
class d{
    private:
    int m;
    public:
    void getdist()
    {
        cout<<"Enter dist : ";
        cin>>m;
    }
    void output()
    {
        cout<<"dist in km is : "<<m<<endl;
    }
    friend int conv(d&);
};
int conv(d& ob1)
{
    ob1.m = (ob1.m)*1000;
    return ob1.m;
    

}
int main()
{
    d ob;
    ob.getdist();
    int r = conv(ob);
    ob.output();
    cout<<"dist in km is : "<<r<<endl;
}