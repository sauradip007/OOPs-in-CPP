#include<iostream>
using namespace std;
class Item{static int count;
int num;
public:
void input(int a){
    num = a;
    
    count++;
}
void getcount()
{
    cout<<"count is "<<count<<endl;

}
};
int Item :: count = 10; //definition intialised to 10 if nothing mentioned
int main()
{
    Item ob1;
    ob1.getcount();
    Item ob2,ob3;
    ob3.getcount();
    ob2.input(2);
    ob3.getcount();
    ob3.input(20);
    ob2.getcount();


}
    
    
    