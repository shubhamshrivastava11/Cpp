#include<iostream>
using namespace std;
int main()
{
    int n;
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
    int m;
    int flag=0;
    cout<<"Item to be searched: "<<endl;
    cin>>m;
    for (int k = 0; k < n; k++ )
    {
        if(a[k]==m)
        {
            cout<<"Item is present!"<<endl;
            flag=1;
            break;
        }
    }
    if(flag!=1)   
    {
        cout<<"Item is absent!"<<endl;
    }
}