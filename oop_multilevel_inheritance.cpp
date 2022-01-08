#include<iostream>
using namespace std;
class stu{
    protected:
    int roll;
    public:
    void input1()
    {
        cout<<"Enter roll no : "<<endl;
        cin>>roll;
    }
    void output1()
    {
        cout<<"Roll No : "<<roll<<endl;
    }
};
class test:public stu{
    protected:
    int sub1 , sub2;
    public:
    void input2()
    {
        cout<<"Enter marks in sub1 and sub2 : "<<endl;
        cin>>sub1>>sub2;
    }
    void output2()
    {
        cout<<"Marks scored are : "<<sub1<<" "<<sub2<<endl;
    }
};
class result:public test{
    private:
    int result;
    public:
    void output1();
    void output2();
    void output3()
    {
        result = sub1+ sub2;
        cout<<"The total result is "<<result<<endl;
    }
};
int main()
{
    result ob;
    ob.input1();
    ob.input2();
   
    ob.output3();
    
}