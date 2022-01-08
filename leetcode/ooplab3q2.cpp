#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int count1 = 0;
    int count2 = 0;
    void input()
    {
        cout<<"Enter value"<<endl;
        cin>>a;
        count1++;
        cout<<"The input func has been called "<<" "<<count1<<" "<<"times"<<endl;
    }
    void output()
    {
        input();
        cout<<"The val of a is : "<<a<<endl;
        count2++;
        cout<<"The output func has been called "<<" "<<count2<<" "<<"times"<<endl;
    }
};
int main()
{
    
    int n;
    cout<<"Enter upto how many objects to be added : "<<endl;
    cin>>n;
    A ob;
    for(int i = 0 ; i < n; i++)
    {
        ob.input();
        ob.output();
        
    }
}