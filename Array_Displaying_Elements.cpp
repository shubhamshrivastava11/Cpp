#include<iostream>
using namespace std;
int main ()
{
    int n=10;
    int a[n];
    cout<<"Enter the items of array: "<<endl;
    for ( int j = 0; j < n; j++)
    cin>>a[j];
    for ( int i = 0; i < n ; i++)
    cout<<a[i]<<endl;
}
