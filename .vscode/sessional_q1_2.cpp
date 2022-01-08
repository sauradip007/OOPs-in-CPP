#include<iostream>
using namespace std;
class Array{
    int *arr,size;
    public:
    class Error{};
    Array(int n)
    {
        size = n;
        arr = new int[size];
    }
    void read()
    {
        for(int i = 0 ; i < size; i++)
        {
            cin>>arr[i];
        }
    }
    
    void display()
    {
        for(int i = 0 ; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    int &operator[](int index)
    {
        if(index < 0 || index > size)
        {
            throw Error();
        }
        else{
            return arr[index];
        }
    }
};
int main()
{
    int n;
    cout<<"Enter no of elements in array "<<endl;
    cin>>n;
    Array A(n);
    cout<<"Enter array elements : "<<endl;
    A.read();
    cout<<"\nArray is : "<<endl;
    A.display();
    try{
   
        A[-1] = 40;
        cout<<"\nThe array is : ";
        A.display();
    }
    catch(Array::Error)
    {
        cout<<"index is out of bound"<<endl;
    }
}