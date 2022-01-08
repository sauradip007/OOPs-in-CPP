#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    ofstream outfile;

    string p;
    outfile.open("reverse");
    cout << "Enter string " << " : " << endl;
    for (int i = 0; p[i] != '\0' ; i++)
    {
       
        cin >>p;
        outfile << "\n"<< p[i] << endl;
    }
    outfile.close();
    int l = p.length();
    ifstream inpfile("reverse");
    for(int i = l; i >=0 ; i--)
    {
        inpfile >> p;

       
        cout << " " << p[i]<< " ";
    }
    inpfile.close();
                
}