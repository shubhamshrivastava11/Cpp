#include<iostream>
using namespace std;
int main()
{
    string m,n;
    cout<<"Enter any name: "<<endl;
    cin>>n;
    cout<<"The name is: "<<n<<endl;
    cin.ignore(256,'\n');
    cout<<"Enter the full name: "<<endl;
    getline (cin,m);
    cout<<m;
}