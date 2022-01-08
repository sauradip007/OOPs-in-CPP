#include<iostream>
using namespace std;
int main()
{
     int size;
     int arr[size];
    cout<<"Enter size of array : "<<endl;
    cin>>size;
    cout<<"\nEnter elements of array : "<<endl;
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of array are : "<<endl;
    int i = 0;
    while(i < size)
    {
        
        try{
        if(arr[i] >= 0)
        {
            cout<<arr[i];
        }
        else{
            throw(arr[i]);
        
        }
        }
        catch (int p)
        {
            cout << "\nNegative array value exception caught" << endl;
            break;
        }

        i++;
    }
   
}