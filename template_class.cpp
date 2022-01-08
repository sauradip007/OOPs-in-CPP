#include<iostream>
using namespace std;
template<class T>
class Array{
    public:
    T arr*;
    int n;
    public:
    Array(int size)
    {
        n = size;
        arr = new T [n];
        
    }
    void getdata()
    {
        cout<<"Enter array : "<<endl;
        for(int i = 0 ; i < n; i++)
        {
            cin>>arr[i];
        }
    }
    Array addarr (Array& A1)
    {
        Array& Result;
        for(int i = 0 ; i < n; i++)
        {
            Result.arr[i] = A1.arr[i] + arr[i];
        }
        return Result;
    }
}