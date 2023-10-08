#include<iostream>
using namespace std;
float area(float r);
int rect( int a, int b);
int main()
{
    float a,z;
    cout<<"Enter the radius of a circle: "<<endl;
    cin>>a;
    z = area (a);
    cout<<"The area of a circle is : "<<z<<endl;
    int p, q, r;
    cout<<"Enter the length and breadth :"<<endl;
    cin>>p>>q;
    r = rect (p,q);
    cout<<"The area of rectangle is : "<<r<<endl;
}
float area (float r)
{
    float s;
    s = 3.14 * r *r;
    return s;
}
int rect (int a, int b)
{
    int c;
    c = a *b;
    return c;
}