#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    int age;
    void input1()
    {
        cout<<"Enter roll no : "<<endl;
        cin>>roll;
        cout<<"Enter age : "<<endl;
        cin>>age;
    }
    void output1()
    {
        cout<<"Roll no : "<<roll<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class Test:public student{
public:
int marks[5];
public:
void input2()
{
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter marks for sub : "<<i+1<<endl;
        cin>>marks[i];
    }
}
void output2()
{
    cout<<"The marks are as follows : "<<endl;
    cout<<"------------------------"<<endl;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<"marks scored in sub"<<i+1<<":"<<" "<<marks[i];
    }

}
};
class Result: public Test{
    public:
    int total = 0;
    float percentage;
    public:
    void output3()
    {
        for(int i = 0 ; i < 5 ; i++)
        {
            total+=marks[i];

            
        }
        int totalmarks = (5*100);
        percentage = ((total/totalmarks)*100);
        cout<<"Total marks scored is : "<<total<<endl;
        cout<<"Percentage scored is : "<<percentage<<endl;
    }
};
class sports: public virtual Test,public Result
{
    public:
    int sports;
    public:
    void input4()
    {
        cout<<"Enter marks scored in sports : "<<endl;
        cin>>sports;
    }
    void output4()
    {
        int newTotal;
        total = sports  + total;
        newTotal = 6*100;
        percentage = (total/newTotal)*100;
        cout<<"The new total is : "<<total<<endl;
        cout<<"The new percentage is : "<<percentage<<endl;
    }
};
int main()
{
    Result ob;
    ob.input1();
    ob.input2();
    ob.output1();
    ob.output2();
    ob.output3();
    sports obj;
    obj.input4();
    obj.output4();

}