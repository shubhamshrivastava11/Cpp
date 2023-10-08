#include<iostream>
using namespace std;
void add();
int main()
{
    add();
}
void add()
{
   int a,b,c;
   cout<<"Enter the numbers= "<<endl;
   cin>>a>>b;
   c=a+b;
   cout<<"Sum is = "<<c<<endl;
}