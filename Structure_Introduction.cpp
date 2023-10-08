#include<iostream>
using namespace std;
int main()
{
    struct student
    { 
        int roll_no;
        string name;
        float fees;
    }; 
    
    struct student student_1;
    cout<<"Enter the roll_no: "<<endl;
    cin>>student_1.roll_no;
    cout<<"Enter the name: "<<endl;
    cin>>student_1.name;
    cout<<"Enter the fees: "<<endl;
    cin>>student_1.fees;
    
    cout<<"The roll_no is: "<<student_1.roll_no;
    cout<<"The name is: "<<student_1.name;
    cout<<"The fees is: "<<student_1.fees;
    
}