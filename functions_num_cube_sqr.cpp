#include<iostream>
using namespace std;
void square(int num); //calling  the parameters of integer type
void cube(int num);   //calling  the parameters of integer type
int main()
{
    square(4);  //value assigned to the num 
    cube(5);    //value assigned to the num 
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
