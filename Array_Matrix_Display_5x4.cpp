#include<iostream>
using namespace std;
int main()
{
    int arr[5][4]={
    {1,2,3,4},
    {2,3,4,5},
    {3,4,5,6},
    {4,5,6,7},
    {5,6,7,8}
    };
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}