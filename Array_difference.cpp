#include<iostream>
using namespace std;
int main()
{
    int n=5,d;
    int a[n];
    int s,l;
    cout<<"Enter any 5 numbers: "<<endl;
    for(int i = 0; i < n; i++)
    {
     cin>>a[i];
    }
    s = a[0]; 
    l = a[0];
    for(int j = 0; j < n; j++)
    {
      if(a[j] > l)
      {
          l = a[j];
      }
      if(a[j] < s)
      {
          s = a[j];
      }
    }
    d = l - s;
    cout<<"Largest is : "<<l<<endl;
    cout<<"Smallest is : "<<s<<endl;
    cout<<"The difference is: "<<d;
}