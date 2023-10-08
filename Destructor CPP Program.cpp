#include<iostream>
using namespace std;
class Vehicle
{
    private:
    string brand,type;
    int cost;
    
    public:
    Vehicle()
    {
        this->brand="";
        this->type="";
        this->cost=0;
    }
    
    Vehicle(string b, string t, int c)
    {
        this->brand=b;
        this->type=t;
        this->cost=c;
    }
    Vehicle(string b,string t)
    {
        this->brand=b;
        this->type=t;  
    }
    void color()
    {
        cout<<"Color of the vehicle is Red!!"<<endl;
    }
    
    ~Vehicle ()
    {
        cout<<"Scope of the Object gets over!! "<<endl;
    }
};
int main()
{
    Vehicle Truck("Volvo","Heavy",35000);
    Vehicle X;
    Vehicle Car("BMW","Sedan");
    Truck.color();
    return 0;
}