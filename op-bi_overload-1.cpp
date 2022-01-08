#include<iostream>
using namespace std;
class array{
    int arr[10];
    int size;
    public:
    array()
    {
        size = 0;
        for(int i = 0 ; i < 10; i++)
        {
            arr[i] =0;
        }
    }
    array(int n)
    {
        cout<<"Enter n : "<<endl;
        cin>>n;
        size = n;
        cout<<"Enter array : "<<endl;
        for(int i = 0 ; i <size; i++)
        {
            cin>>arr[i];
        }
    }
    friend array operator +(array a1,array a2)
    {
        array temp;
        temp.size = a1.size;
        for(int i = 0 ; i < a1.size; i++)
        {
            temp.arr[i] = a1.arr[i] + a2.arr[i];
        }
        return temp;

    }
    void show()
    {
        cout<<"Added array is : "<<endl;
        for(int i = 0 ; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    int n;
    array ob1(n),ob2(n);
    array ob3;
    ob3 = ob1 + ob2;
    ob3.show();
}