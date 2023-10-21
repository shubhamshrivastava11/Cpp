#include<iostream>
using namespace std;
int main()
{
    int n,k,temp;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values of an array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"values of an array: "<<endl;
    for (int j = 0; j < n; j++)
    {
        cout<<a[j]<<endl;
    }
    for( k = 0; k < n; k++)
    {
        for ( int l = 0; l < n-k-1 ; l++)       //
        {
            if(a[l]>a[l+1])
            {
              temp = a[l];
              a[l] = a[l+1];
              a[l+1] = temp;
            }
        }
    }
    cout<<"Sorted values of the array are: "<<endl;
    for( int m = 0; m < n; m++)
    {
       cout<<a[m]<<endl; 
    }
}