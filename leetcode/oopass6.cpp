#include<iostream>
using namespace std;
class area{
    public:
    int base,height;
    void getdim()
    {
        cout<<"Enter base : "<<endl;
        cin>>base;
        cout<<"Enter height : "<<endl;
        cin>>height;
        
    }
    int are(){
        int A = (0.5*base*height);
        return A;
    }
};
int main()
{
    area ob;
    ob.getdim();
   int result = ob.are();
    cout<<"The area is given by : "<<result<<endl;
}