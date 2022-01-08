#include<iostream>
using namespace std;
class vect{
    public:
    int *ptr;
    int size;
    public:
    vect()
    {
        ptr = NULL;
        size= 0;
    }
    vect(int x)
    {
        size = x;// size parameterised to x
        ptr = new int [size];
    }
    void getarr()
    {
        cout<<"\nEnter array : "<<endl;
        for(int i = 0 ; i < size; i++)
        {
            cin>>ptr[i];
        }
    }
    void show()
    {
        cout<<"\nThe array is : "<<endl;
        for(int i = 0 ; i < size ; i++)
        {
            cout<<ptr[i]<<" ";
        }
    }
};
int main()
{
    cout << "Enter size of the array : " << endl;
    int x;
    cin >> x;
    vect v(x);
   
    
    v.getarr();
    v.show();

    
}