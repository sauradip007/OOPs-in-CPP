#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"\nENter nos : "<<endl;
    cin>>num;
    float* ptr;
    ptr = new float[num];
    for(int i = 0; i< num; i++)
    {
        cout<<"number"<<" "<<i+1<<" ";
        cin>>*(ptr+i);
    }
    for(int i  = 0; i < num ; i++)
    {
        cout<<"numbers are : "<<" "<<i+1<<" "<<*(ptr+i);
        
    }
    delete []ptr;

}