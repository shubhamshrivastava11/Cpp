#include<iostream>
using namespace std;
int main()
{
int a=1;
while(a>0)
{
    cout<<"Enter the Number"<<endl;
    cin>>a;
    if(a<0)
    {
     cout<<"number is negative!"<<endl;
     break;
    }
    cout<<"a = "<<a*a<<endl;
}
}



 