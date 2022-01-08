#include<iostream>
using namespace std;
class student{
    public:
    string name[3];
    int roll[3];
    float marks[4];
    public:
    void input()
    {
        for(int i = 0 ; i < 3; i++)
        {
            cout<<"Enter name : "<<endl;
            getchar();
            getline(cin,name[i]);
            cout<<"Enter roll no : "<<endl;
            cin>>roll[i];
            for(int j = 0 ; j < 4 ; j++)
            {
                cout<<"Enter marks : "<<endl;
                cin>>marks[j];
            }

        }
        

    }
    friend void display(student&);
};
void display(student &ob)
{
    
    float average;
    float sum = 0.0;
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<<ob.name[i]<<" "<<ob.roll[i]<<endl;
        for(int j = 0 ; j < 3 ; j++)
        {
            cout<<ob.marks[j]<<endl;
            sum += ob.marks[j];
            average = (sum)/4;
            cout<<"The average is : "<<average<<endl;
        }

    }
}
int main()
{
    student stu;
    stu.input();
    display(stu);
}
