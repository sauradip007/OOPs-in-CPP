#include<iostream>
using namespace std;
int binSearch(int arr[], int n, int key){
    int s= 0; //starting
    int e = n;
    
    int mid =(s+e)/2;
    while(s<= e){//when equals e thats the key
    
    if(arr[mid]==key){
        return mid;
        
    }
    else if(arr[mid]>key){ //first half
    e = mid - 1;

    }
    else{
        s = mid + 1;
    }
    }
    return -1;
   /*if(s > e)
   {
       if(key < arr[mid])
       {
           return mid-1;
       }
       else{
           return mid+1;
       }
   }*/
   
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i = 0 ; i < n; i++){
    cin>>arr[i];
}
int key;
cin>>key;
cout<<binSearch(arr , n , key)<<endl;
return 0;
}
