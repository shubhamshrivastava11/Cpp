#include<iostream>
using namespace std;
int main()
{
int i=1,a;
while(i<=5)
{
  cout<<"Enter any 5 numbers: "<<endl;
  cin>>a;
  if(a!=3)
    {
        cout<<a;
    }
  else 
  {
     break;
  }
  i++;
}
}
 