#include<iostream>
using namespace std;
int main()
{
    string a="Hello ";
    string b="World";
    string c= "Welcome to C++ Programming!";
    cout<<a+b;
    int num = c.find("m",7);
    cout<<num;
    c.replace(11,16,"Java ");
    cout<<c;
    c.insert(15," Coding");
    cout<<c;
}