#include<iostream>
using namespace std;
int max( int a, int b);
double max ( double x, double y);
int main()
{
    int p,q,r;
    cout<<"Enter any two numbers: "<<endl;
    cin>>p>>q;
    r = max(p,q);
    cout<<"Greater number is : "<<r<<endl;
    double m,n,o;
    cout<<"enter any two numbers : "<<endl;
    cin>>m>>n;
    o = max(m,n);
    cout<<"Greater number is : "<<o<<endl;
}
int max( int a, int b)
{
    if (a>b)
    {
        cout<<"a is Greater!"<<endl;
        return a;
    }
    else if(a==b)
    {
       
        return b;
    }
    else {
        cout<<"b is greater!"<<endl;
    return b;
        
    }
}

double max ( double x, double y)
{
    if (x>y)
    {
        cout<<"x is Greater!"<<endl;
        return x;
    }
     else if(x==y)
    {
        return x;
    }
    else {
    cout<<"y is greater!"<<endl;
    return y;
    }
}