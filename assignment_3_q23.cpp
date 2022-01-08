#include <iostream>
using namespace std;
class N
{
public:
    int a, b;

public:
    N()
    {
        cout << "\nEnter a : " << endl;
        cin >> a;
        
    }

    void show()
    {
        try
        {
            if (a >= 0)
            {
                cout << "The decremented value is : " << endl;
                cout << a << " " << endl;
            }
            else
            {
                throw(a);
            }
        }
        catch (int a)
        {
            cout << "Exception caught" << endl;
        }
    }
    // friend void operator ++(N);
    void operator--()
    {
        --a;
       
    }
};
int main()
{
    N ob1;
    --ob1;

    ob1.show();
    
}
