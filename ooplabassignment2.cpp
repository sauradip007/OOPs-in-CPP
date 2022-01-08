#include<iostream>
using namespace std;
class date { public: int day ; public: int month; public: int year;
public:
void input()
{
    cout<<"\nEnter day : ";
    cin>>day;
    cout<<"\nEnter month : ";
    cin>>month;
    cout<<"\nEnter year : ";
    cin>>year;
}
};
int month[12] = {31,28,31, 30, 31, 30,31, 31, 30, 31, 30, 31 };

int difference(date d1 , date d2){
    int n1 = d1.year*365 + d1.day;
    int n2 = d2.year*365 + d2.day;
    for(int i = 0 ; i < d1.month;i++){
        n1 += month[i];
    }
    for(int j = 0 ; j < d2.month ; j++){
        n2 += month[j];
    }
    return n2 -n1;

}
int main()
{
    date d1,d2;
    d1.input();
    d2.input();
    cout<<"The difference is : "<<difference(d1,d2)<<endl;


}
