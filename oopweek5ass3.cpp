#include<iostream>
using namespace std;
class book{
    public:
    string name[3];
    string author[3];
    int price[3];
    public:
    void get()
    {
        for(int i = 0 ; i < 3 ; i++){
        cout<<"Enter book name : "<<endl;
        getchar();
        getline(cin,name[i]);
        cout<<"Enter author name : "<<endl;
        getchar();
        getline(cin,author[i]);
        cout<<"Enter price : "<<endl;
        cin>>price[i];
        }
    }
    friend void showbook(book&);
        
};
void showbook(book &ob)
{
    cout<<"NAME"<<" "<<" "<<"AUTHOR"<<endl;
    cout<<"-------------------"<<endl;
    for(int i = 0 ; i < 3 ; i++)
    {
        if(ob.price[i] >= 300 && ob.price[i]<= 500)
        {
            cout<<ob.name[2]<<" "<<ob.author[2]<<" "<<endl;
        }
        else if (ob.price[i] >= 600 && ob.price[i]<= 700)
        {
            cout<<ob.name[1]<<" "<<ob.author[1]<<" "<<endl;
        }
        else if(ob.price[i] >= 800 && ob.price[i]<= 1000)
        {
            cout<<ob.name[0]<<" "<<ob.author[0]<<" "<<endl;
        }
    }
}
int main()
{
    book b;
    b.get();
    showbook(b);
}