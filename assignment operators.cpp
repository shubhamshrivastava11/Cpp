#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter the numbers"<<endl;
cin>>a>>b;
a=a+b;
cout<<a<<endl; //expected output : 9
a+=b;
cout<<a<<endl; //expected output: 14
a-=b; 
cout<<a<<endl; //expected output: 9
a*=b;
cout<<a<<endl; // 45
a/=b;
cout<<a<<endl; // 9
a%=b;
cout<<a<<endl; // 4
}