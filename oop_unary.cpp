#include <iostream>
using namespace std;
class Distance
{
public:
    int feet;
    int inches;
    Distance()
    {
    }
    Distance(int p, int q)
    {
        feet = p;
        inches = q;
    }

    Distance operator-()
    {
        Distance obj;
        obj.feet = feet--;     // decrementing feet by 1
        obj.inches = inches--; // decrementing inches by 1
        return obj;
    }
};
int main()
{
    Distance ob1(2, 3);
    -ob1;
    cout << "the total distance in feet is" << ob1.feet << endl;
    cout << "the total distance in inches is " << ob1.inches << endl;
    return 0;
}