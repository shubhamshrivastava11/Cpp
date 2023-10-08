#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values of the array: "<<endl;
    for( int i = 0; i < n; i++)
    {
       cin>>a[i]; 
    } 
    cout<<"Array Values are: "<<endl;
    for( int j = 0; j < n; j++)
    {
      cout<<a[j]<<endl;
    }
}