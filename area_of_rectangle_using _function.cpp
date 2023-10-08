#include<iostream>
using namespace std;
int rect(int l, int b);
int main ()
{
    int a,b,c,cost,z;
    cout<<"Enter the length and breadth: "<<endl;
    cin>>a>>b;
    c = rect(a,b);
    cout<<"Enter the value of z:"<<endl;
    cin>>z;
    cost = c * z; 
    cout<<"Area of a rectangle is : "<<c<<endl;
    cout<<"Cost :"<<cost<<endl;
}
int rect( int l, int b)
{
    int p;
    p= l*b;
    return p;
}