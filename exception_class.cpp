#include<iostream>
using namespace std;
class exception{
    int * arr, size;
    public:
    exception(int n)
    {
        size = n;
        arr = new int [size];

    }
}