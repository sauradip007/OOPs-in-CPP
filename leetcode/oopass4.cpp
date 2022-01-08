#include<iostream>
using namespace std;
class findsum{
    public:
    int N;
    void getno()
    {
        cout<<"Enter required number n : "<<endl;
        cin>>N;
    }
    int sum()
    {
        int s = 0;
        for(int i = 1 ; i <= N; i++){
            s += i;
        }
        return s;
    }
    
    
};
int main()
{
    findsum ob;
    ob.getno();
    int result = ob.sum();
    cout<<"The sum upto N numbers is : "<<" "<<result<<endl;
}