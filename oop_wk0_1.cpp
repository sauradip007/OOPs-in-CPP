#include <iostream>
using namespace std;
class N
{
public:
    int a[5];
    friend istream &operator>>(istream &din, N &ob);
    friend ostream &operator<<(istream &dout, N &ob);
};
istream &operator>>(istream &din, N &ob)
{
    for (int i = 0; i < 5; i++)
    {
        din >> ob.a[i];
    }
    return din;
}
ostream &operator<<(ostream &dout, N &ob)
{
    for (int i = i; i < 5; i++)
    {
        dout << ob.a[i] << endl;
    }
    return dout;
}
int main()
{
    N ob1;
    cin >> ob1;
    cout << ob1;
}