#include<iostream>
using namespace std;
class Sample
{
    static int x;

public:
    Sample() { x++; }
    static int getX() { return x; }
};
int Sample::x = 0;
int main()
{
    cout << Sample::getX() << " ";
    Sample t[5];
    cout << Sample::getX();
}
