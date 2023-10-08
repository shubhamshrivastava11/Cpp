#include<iostream>
using namespace std;
float area(float r);
int area( int a, int b);
int area(int x);
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
    r = area (p,q);
    cout<<"The area of rectangle is : "<<r<<endl;
    int m,n;
    cout<<"Enter the side of a square: "<<endl;
    cin>>m;
    n = area(m);
    cout<<"the area of a square is : "<<n<<endl;
}
float area (float r)
{
    float s;
    s = 3.14 * r *r;
    return s;
}
int area(int a, int b)
{
    int c;
    c = a *b;
    return c;
}
int area(int x)
{
    int y;
    y = x *x ;
    return y;
}