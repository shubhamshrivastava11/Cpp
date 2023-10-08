#include<iostream>
using namespace std;
int main()
{
int i=1;
while(i<=50)
{
   if (i%15==0)
  {
      cout<<i<< " is a multiple of 15"<<endl;
  }
   else if(i%3==0)
  {
  cout<<i<< " is a multiple of 3"<<endl;
  }
  else if (i%5==0)
  {
      cout<<i<< " is a multiple of 5"<<endl;
  }
  i++;
}
}
 