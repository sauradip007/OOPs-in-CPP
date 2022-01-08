#include<iostream>
#include<string.h>
using namespace std;
class str{
    char * s;int n;
    public:
    str()
    {
        s = NULL;
        n = 0;
    }
    str(char *q)
    {
        n = strlen(q) + 1;
        s = new char [n+1];
        strcpy(s,q);
    }
    friend str  operator + (str s1, str s2)
    {
        s2.n += s1.n + 1;      
        
        strcat(s2.s,s1.s);
      
        // strcat(s3.s,s1.s);
        // s3.s = strcat(s3.s,s1.s);
        return s2;
    }
    void show()
    {
        cout<<s<<endl;
    }

};
int main()
{ 
    char s[10] = "Hello";
    char p[10] = "World";
    str ob1(s),ob2(p);
   ob2 = ob2 + ob1;
    ob2.show();
    

}