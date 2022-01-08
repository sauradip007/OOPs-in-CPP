#include<iostream>
using namespace std;
int max(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1 ; j < n; j++)
        {
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    return arr[n-1];
}
int main()
{
    int c;
    int n;
    int i;
    cin>>n;
    int candies[n];
    int result[n];
    int extraCandies;
    cin>>extraCandies;
    bool a;
    
    for(i = 0; i < n ; i++){
        cin>>candies[i];
    }
    c = max(candies, n);
    
    for( i = 0 ; i < n ; i++){
        if(extraCandies + candies[i] >= c){
            a = true;
        }
        else if(extraCandies + candies[i] < c){
            a = false;
        }
        int temp = a;
        a = result[i];
        result[i] = temp;
        cout<<result[i]<<" ";
    }cout<<endl;
  
    
}