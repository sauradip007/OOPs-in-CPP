#include<iostream>
#include<climits>
using namespace std;
int maxSum(int arr[] , int n)
{
    
    int sum = 0;
    for(int i = 0 ; i < n-1; i++)
    {
        for(int j = i + 1 ; j < n; j++)
        {
            sum+= min(arr[i] , arr[j]);

        }
    }
    return sum;
}
int main()
{

}