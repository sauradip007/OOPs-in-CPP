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