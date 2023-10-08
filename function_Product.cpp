#include<iostream>
using namespace std;
void prod(int a, int b, int c);
int main()
{
    int x,y,z;
    cout<<"Enter any 3 numbers :"<<endl;
    cin>>x>>y>>z;
    prod(x,y,z);
}
void prod(int a, int b, int c)
{
    int p;
    p= a*b*c;
    cout<<"Product is : "<<p<<endl;
}