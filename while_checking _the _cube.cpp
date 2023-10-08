#include<iostream>
using namespace std;
int main ()
{
    int a=1;
    while (a<50)
    {
      cout<<"enter the number "<<endl;
      cin>>a;
      if(a>50)
      {
          cout<<"Number is greater tha 50!"<<endl;
          break;
      }
      else{
          cout<<"a = "<<a*a*a<<endl;
      }
    }
    
    
}