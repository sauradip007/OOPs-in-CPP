/*Create a class which stores name, author and price of a book. 
Store information for n number of books. Display information of 
all the books in a given price range*/


#include<iostream>
using namespace std;
class book{
    public:
    string name, author;
    public:
    int price;
    void getinfo()
    {
        cout<<"Enter book name"<<endl;
        getline(cin,name);
        cout<<"Enter author name : "<<endl;
        getline(cin,author);
        cout<<"Enter price range : "<<endl;
        cin>>price;
    }
    void display()
    {
        cout<<name<<author<<price<<endl;
    }

};
int main()
{
    int n;
    cout<<"Enter the number of books to be shown : "<<endl;
    cin>>n;
    book b[n];
    for(int i = 0 ; i < n ; i++)
    {
        b[i].getinfo();
        
    }
    cout<<"NAME"<<" "<<"AUTHOR"<<" "<<"PRICE"<<endl;
    cout<<"----------------------------"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        b[i].display();
        
    }


}
