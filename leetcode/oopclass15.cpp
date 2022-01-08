#include<iostream>
using namespace std;
class life{
    int mfy,expy,yr;
    public:
    void getdata();
    void lf_period(life);
};
void life::getdata()
{
    cout<<"Enter manufacture and expiry date"<<endl;
    cin>>mfy>>expy;
}
void life::lf_period(life ob)
{
    yr = ob.expy - ob.mfy;
    cout<<"The life period is : "<<yr<<endl;

}
int main()
{
    life ob1;
    ob1.getdata();
    ob1.lf_period(ob1);
}