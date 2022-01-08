#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
int n1;
cin>>n1;
int n2;
cin>>n2;
int n3 = gcd(n1,n2);
int nums1[n1];
int nums2[n2];
int a[n3];
int count = 0;
for(int i = 0 ; i < n1 ; i++)
{
    cin>>nums1[n1];
}
for(int i = 0; i < n2; i++)
{
    cin>>nums2[n2];
}
int i =0;
int j = 0;
int k = 0;

    while(i < n1 && j < n2 && k < n3)
    {
        if(nums1[i] == nums2[j])
        {
            int temp = nums1[i];
            nums1[i] = a[k];
            a[k] = temp;
           
        }
        cout<<a[k]<<" ";
        i++;
        j++;
        k++;

    }cout<<endl;
    
}


