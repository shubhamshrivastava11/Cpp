#include<iostream>
using namespace std;
void square();
void cube();
int main()
{
    square();
    cube();
}
void square()
{
    int a=1;
    cout<<"enter any number"<<endl;
    cin>>a;
    a= a*a;
    cout<<"Square is = "<<a<<endl;
}
void cube()
{
    int a=1;
    cout<<"enter any number"<<endl;
    cin>>a;
    a= a*a*a;
    cout<<"Cube is = "<<a<<endl;
}
