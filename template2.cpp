#include<iostream>
using namespace std;
template<class T>
class Counter{
    public:
    static T count;
    public:
    Counter()
    {
        count++;
    }
    void num()
    {
        cout<<"No of objects created are : "<<count<<endl;
    }
};
template<class T>
    T Counter<T>::count;
    int main