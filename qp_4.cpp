#include<iostream>
using namespace std;
class Date{
    public:
    int day,month,year;
    public:
    void getdata()
    {
        cout<<"Enter day: "<<endl;
        cin>>day;
        cout<<"Enter month : "<<endl;
        cin>>month;
        cout<<"Enter year : "<<endl;
        cin>>year;

    }
    int daysSinceJan()
    {
        //for jan 1
        // day will be 1 , month will be 1 and the year will be the same as the year given
    }
};