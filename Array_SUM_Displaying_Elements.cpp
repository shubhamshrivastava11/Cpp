#include<iostream>
using namespace std;
int main()
{
    int n=10;   //size of the array
    int a[n];
    int sum=0;
    cout<<"Enter any numbers: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    if(a[j]%2==0)
    {
        cout<<"Given number is even!"<<endl;
        sum = sum + a[j];
    }
    else
    {
        cout<<"Not even number!"<<endl;
    }
    
    }
      cout<<"Sum of the even numbers is : "<<sum;
         
} 