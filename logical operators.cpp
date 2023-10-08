#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter the numbers"<<endl;
cin>>a>>b;
cout<<"&&"<<(a&&b)<<endl; // both should be true
cout<<"&&"<<(a&&a)<<endl; //
cout<<"&&"<<(b&&b)<<endl; //
cout<<"||"<<(a||b)<<endl;   //or operation
cout<<"||"<<(a||a)<<endl;  
cout<<"||"<<(b||b)<<endl; 
cout<<"!a"<<(!a)<<endl;
cout<<"!b"<<(!b)<<endl;    //not equals to 
}