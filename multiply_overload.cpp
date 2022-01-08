#include<iostream>
using namespace std;
class N{
    int a, b;
    N()
    {

    }
    N(int p , int q)
    {
        a = p;
        b = q;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend N operator * (int, N&);
};
N operator * (int n , N& ob){
    
    N obj;
    obj.a = n * ob.a;
    obj.b = n * ob.b;
    return obj;
}
int main()
{
    N ob(2,3);

}