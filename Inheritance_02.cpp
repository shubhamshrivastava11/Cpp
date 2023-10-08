#include<iostream>
using namespace std;
class Vehicle
{
    protected:
    string brand,color;
    int cost;
    
    public:
    void setValue(string b, string c)
    {
        brand= b;
        color= c;
    }
};
class Car : public Vehicle
{
    public:
    int price()
    {
      int P= 5000;
      return P;
    }
};
class Truck : public Vehicle
{
    public:
    int size()
    {
      int S= 10000;
      return S;
    }
};
int main()
{
    Vehicle Sedan;
    Sedan.setValue("BMW","Silver");
    Car X;
    X.price();
    cout<<X.price()<<endl;;
    Truck Y;
    Y.size();
    cout<<Y.size();
}