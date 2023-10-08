#include<iostream>
using namespace std;
int larger(int a , int b);
int main ()
{
    int x,y,z;
    cout<<"Enter any two numbers: "<<endl;
    cin>>x>>y;
    z = larger (x,y);
    cout<<"The greater number is : "<<z<<endl;
}
int larger (int a, int b) 
{
    if (a>b)
    {
     return a;
    }
    else
    {
     return b;
    }
}