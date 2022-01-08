#include<iostream>
#include<math.h>
using namespace std;
class dist{ public : int x ; public : int y;};
int main(){
    dist d[2];
    int dx ;
    int dy ;
    int finalx;
    int finaly;
    
    double reqDist;

    for(int i =0 ; i < 2 ; i++)
    {
        cout<<"\nEnter x coordinate : ";
        cin>>d[i].x;
        cout<<"\nEnter y coordinate : ";
        cin>>d[i].y;
    }
    dx = d[1].x - d[0].x;
    dy = d[1].y - d[0].y;
    reqDist = sqrt((pow(dx,2)) + (pow(dy,2)));
    cout<<"\nThe distance between given points is : "<<reqDist<<endl;
    return 0;


}