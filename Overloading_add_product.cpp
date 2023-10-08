#include<iostream>
using namespace std;
int calc ( int a, int b);
int calc ( int x, float y);
int main()
{
    int p,q,r;
    cout<<"Enter any 2 numbers : "<<endl;
    cin>>p>>q;
    r = calc (p,q);
    cout<<"The sum is : "<<r<<endl;
    int i,k;
    float j;
    cout<<"Enter any 2 numbers : "<<endl;
    cin>>i>>j;
    k = calc(i,j);
    cout<<"The product is "<<k<<endl;
}
int calc ( int a , int b)
{
    int c;
    c = a + b;
    return c;
}
int calc ( int x, float y)
{
    int z;
    z = x * y;
    return z;
}
