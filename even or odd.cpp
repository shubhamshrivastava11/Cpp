#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter the numbers"<<endl;
cin>>a>>b;
cout<<((a!=1) ? "Not 1 \n" : " One \n");
cout<<((b%2==0) ? "Even" : "Odd");
}