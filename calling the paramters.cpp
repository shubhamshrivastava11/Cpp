#include<iostream>
using namespace std;
void square(int num); //calling  the parameters of integer type
void cube(int num);   //calling  the parameters of integer type
int main()
{
    int a;
    cout<<"Enter the number"<<endl;  //asking user to for the input 
    cin>>a;
    square(a);  //value assigned to the num 
    cube(a);    //value assigned to the num 
}
void square(int num)
{
    num= num*num;
    cout<<"Square is = "<<num<<endl;
}
void cube(int num)
{
    num= num*num*num;
    cout<<"Cube is = "<<num<<endl;
}
