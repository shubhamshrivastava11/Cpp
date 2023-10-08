#include<iostream>
using namespace std;
int main ()
{
   int i=50;
   while(i<=100)
   {
      if (i==55 || i==65 || i==75)
      {
      i++;  
      continue;
      }
      cout<<i<<endl;
      i++;
   }
    
}