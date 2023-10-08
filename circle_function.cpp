#include<iostream>
using namespace std;
float area(float r);
int main()
{
    float a,z;
    cout<<"Enter the radius of a circle: "<<endl;
    cin>>a;
    z = area (a);
    cout<<"The area of a circle is : "<<z<<endl;
}
float area (float r)
{
    float s;
    s = 3.14 * r *r;
    return s;
}