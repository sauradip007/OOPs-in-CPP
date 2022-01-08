#include<iostream>
using namespace std;
class emp{public: int id ; public: string name; public: int age ; public : int sal;};
int main()
{
    emp s[3];
    float DA;
    float HRA;
    float grossSal;
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<<"\nEnter id : ";
        cin>>s[i].id;

        cout<<"\nEnter names : ";
        cin>>s[i].name;
        cout<<"\nEnter age : ";
        cin>>s[i].age;
        cout<<"\nEnter salary : ";
        cin>>s[i].sal;


    }
    
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<<s[i].id<<endl;
        cout<<s[i].name<<endl;
        cout<<s[i].age<<endl;
        cout<<s[i].sal<<endl;
        DA = (s[i].sal*0.8);
        HRA = (s[i].sal * 0.1);
        grossSal = s[i].sal + DA + HRA;
        cout<<"\nThe gross sal is : "<<DA<<'+'<<HRA<<'+'<<s[i].sal<<'='<<grossSal<<endl;
        

    }
}