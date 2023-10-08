#include<iostream>
using namespace std;
int main()
{
    int a[3] = {3,4,5};
    int sum=0;
    for(int i = 0; i <= 2; i++)
    {
      sum = sum + a[i];
    }
        cout<<"Sum = "<<sum;
}
