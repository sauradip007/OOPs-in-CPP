#include<iostream>
using namespace std;
class c2;
class complex{
    float r;
    float i;
    public:
    void get()
    {
        cout<<"Enter real part : ";
        cin>>r;
        cout<<"Enter imaginary : ";
        cin>>i;
    }
    friend complex add (complex, complex);
    void show()
    {
        cout<<r<<"+"<<"i"<<i<<endl;
    }
    


};
complex add(complex c1, complex c2)
{
    complex c3;
    c3.r = c1.r + c2.r;
    c3.i = c1.i + c2.i;
    return c3;
}

int main()
{
    complex A,B,C;
    A.get();
    B.get();
    C = add(A,B);
    C.show();

}