#include<iostream>
using namespace std;
class sample{
    int a, sum;
    public:
    void getdata()
    {
        cout<<"Enter a : "<<endl;
        cin>>a;
    
    }
    void display(sample*,sample*);
};
void sample::display(sample* x, sample* y)
{
    sum = x->a + y->a;
    cout<<sum<<endl;
}
int main()
{
    sample s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s3.display(&s1,&s2);
}