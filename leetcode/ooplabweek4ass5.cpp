#include<iostream>
using namespace std;

class P{
    public:
    int n ; char p;
    public:
   void get();
   void display(int , char);  
};
void P::get()
{
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter p : "<<endl;
    cin>>p;

}
void P::display()
{
    if(n == NULL){
    
    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<p<<" ";

    }cout<<endl;
    }
    else{
   
    
        for(int i = 0 ; i <= n ; i++)
    {
        cout<<"*"<<" " ;


    }cout<<endl;
    }

    }


int main()
{
    P ob;
    ob.get();
    ob.display();
}