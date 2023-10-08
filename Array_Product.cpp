#include<iostream>
using namespace std;
int main()
{
    int a[5]= {2,3,4,5,6};
    int x=1;
    for(int i=0;i<=4;i++)
    {
    x= x * a[i];
    }
     cout<<"The product is: "<<x;
}
