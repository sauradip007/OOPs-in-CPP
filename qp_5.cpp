#include<iostream>
#include <cmath>
using namespace std;

class Array{
    public:
    int *arr;
    int n;
    Array()//default
    {
        int n = 0;
    }
    Array(int num)
    {
        n = num;
        arr = new int [n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
       
        }
        void sumin()
        {
            // for(int i = 0 ; i < n ; i++)
            // {
            //     for(int j = 0 ; j < n ; j++)
            //     {
            //         int minsum = INT_MAX;
            //         // minsum = min(abs(arr[i] + arr[j] - 0),minsum);
            //         int sum = abs(arr[i]+ arr[j]- 0);
            //         if(sum < minsum){
            //             minsum = sum;
            //         }
            //         else{
            //             cout<<arr[i]<<" "<<arr[i];
            //         }
                    
            //     }

            // }
            int i = 0;
            int  j = n-1;
            int minsum = INT_MAX;
            
            while(i < j)
            {
                int sum =abs(arr[i] + arr[j] - 0);
                int l;
                int r;
                if(sum < minsum)
                {
                    minsum = sum;
                    l = arr[i];
                    r = arr[j];
                    i++;
                    j--;

                }
              if(sum > 0)
              {
                  i++;
              }
              else{
                  j--;
              }
              i++;
              j--;
            }
        }
    
};
int main()
{
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    Array a(n);
    a.sumin();
}