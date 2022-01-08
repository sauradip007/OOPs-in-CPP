#include<iostream>
#define MAX 5
using namespace std;
template <class T>
class sorta
{

public:
    void getarr(T a[])
    {

        cout << "Enter values of array : " << endl;
        for (int i = 0; i < MAX; i++)
        {
            cout << "Enter index " << i + 1 << endl;
            cin >> a[i];
        }
    }
    void sort(T a[])
    {
        for (int i = 0; i < MAX - 1; i++)
        {
            for (int j = i + 1; j < MAX; j++)
            {
                if (a[j] < a[i])
                {
                    T temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
    }
    void showarr(T a[])
    {
        cout << "The sorted array is : " << endl;
        sort(a);
        for (int i = 0; i < MAX; i++)
        {
            cout << a[i] << " " << endl;
        }
    }
};
int main()
{
    sorta<int> v;
    int arr[MAX];
    v.getarr(arr);
    v.showarr(arr);
    sorta<float> f;
    float b[MAX];
    f.getarr(b);
    f.showarr(b);
}