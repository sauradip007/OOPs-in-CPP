#include<iostream>
#include<string.h>
using namespace std;
class st{
    char* s ; char* t;
    int size;
    public:
    void display()
    {
        strcat(s,t);
        cout<<"The concatenated string is : "<<s<<endl;
    }
    st(char*,char*);
    ~st();

};
st::st(char*c, char*d)
{
    size = strlen(c);
    size = strlen(d);
    s = new char [size+1];
    t = new char[size+1];
    strcpy(s,c);
    strcpy(t,d);
}
st::~st(){
    delete []s;

}
int main()
{
 
    char *p = new char[30];
    char *q = new char[30];
    cout<<"Enter first string : "<<endl;
    cin.getline(p,30);
    cout<<"Enter second string : "<<endl;
    cin.getline(q,30);
    st ob(p,q);
    ob.display();
   
    
}