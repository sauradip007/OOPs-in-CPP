#include<iostream>
using namespace std;
template<class T>
T great(T a, T b)
{
    if(a > b)
    {
        return a;
    }
    else{
        return b;
    }
}
template <class T>
void swapelem(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
    
    
}
template<class T>
void sumarr(int n , T arr[])
{
    int size = n;
    arr = new T [size];
    T sum  = 0;
    for(i = 0 ; i < size ; i++)
    {
        sum += arr[i];

    }

}

int main()
{
    int a = 4;
    int b = 5;
    cout<<"Greater element is : "<<great(a,b)<<endl;
    char c = 'A';
    char d = 'B';
    cout<<"Greater is : "<<great(c,d)<<endl;
}