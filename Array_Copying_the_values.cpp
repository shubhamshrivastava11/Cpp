#include<iostream>  
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values of an array: "<<endl;
    for ( int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Values of an array: "<<endl;
    for ( int j = 0; j < n; j++)
    {
        cout<<a[j]<<endl;;
    }
    int b[n];
    for ( int k = 0; k < n; k++)
    {
        b[k] = a[k];
    }
       cout<<"The values of second array is: "<<endl;
       for ( int m = 0; m < n; m++)
       {
           cout<<b[m]<<endl;
       }
    
}