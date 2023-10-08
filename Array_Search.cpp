#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a[n];
    cout<<"Enter any 5 values: "<<endl;
    for ( int i = 0; i < n; i++ )
    {
        cin>>a[i];
    }
    int m;
    cout<<"Enter item for search: "<<endl;
    cin>>m;
    int flag = 0;
    for( int j = 0; j < n; j++) 
    {
        if (a[j] == m )
        {
            cout<<"Item is present in the given array!"<<endl;
            flag = 1;
            break;
        }
    }
    if (flag != 1 )
        {
            cout<<"Item is absent in the given array!"<<endl;
        }
}