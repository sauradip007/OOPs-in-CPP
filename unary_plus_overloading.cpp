#include<iostream>
using namespace std;
class N{
    public:
    int a,b;
    public:
    N()
    {
        cout << "\nEnter a : " << endl;
        cin >> a;
        cout << "\nEnter b : " << endl;
        cin >> b;
    }
    N(int p, int q)
    {
        a = p;
        b = q;
  
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    // friend void operator ++(N);
    void operator++()
    {
        ++a;
        ++b;
    }
};
int main()
{
    N ob1;
    ++ob1;
    N ob2(3,4);
    ob1.show();
    ob2.show();
}
