#include<iostream>
using namespace std;
void func(int n);
int main()
{
   int a;
   cout<<"Enter any number: "<<endl;
   cin>>a;
   func(a);
   
}
void func(int n)
{
   int i;
   int flag=1;
   for(i=2; i<=n/2; i++)
   {
    if(n%i == 0) 
    {
        cout<<"The no is not a prime number!"<<endl;
        flag=0;
        break;
    }
    }
    if(flag==1)
    {
    cout<<"It is a prime number!"<<endl;
}
    
}