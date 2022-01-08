#include<iostream>
using namespace std;
int main()
{
    char a[100];
    cout<<"Enter a string : "<<endl;
    cin.getline(a,100);
    int i = 0;
    
    
        while (a[i] != '\0')
        {
            try{
            if (a[i] != ' ')
            {
                cout << a[i];
            }
            else
            {
                throw(a[i]);
            }
           
            }
            catch (char p)
            {
                cout << "\nException caught space found" << endl;
                break;
            }
            i++;
        }
    
 
    
}