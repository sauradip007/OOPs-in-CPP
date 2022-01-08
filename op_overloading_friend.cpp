#include <iostream>
using namespace std;
class N
{
public:
    int a;
    int b;
    N()
    {
        a = 3;
        b = 4;
    }
    N(int p, int q)
    {
        a = p;
        b = q;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
  

friend void operator --(N&);
};
void operator --(N& ob)
{
    ob.a = -ob.a;
    ob.b = -ob.b;
}
int main(){
    N ob;
    --ob;
    ob.show();

}