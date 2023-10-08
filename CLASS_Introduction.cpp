#include<iostream>
using namespace std;
class Dog
{
    private: 
    int age,weight;
    string color;
    
    public:
    void bark()
    {
        cout<<"Dog barks!!"<<endl;
    }
    
    void breed()
    {
        cout<<"Breed is Rottweiler!!"<<endl;
    }
    
    void setAge(int years)
    {
        this->age=years;
    }
    void setWeight(int kilograms)
    {
        this->weight=kilograms;
    }
    void setColor(string shade)
    {
        this->color=shade;
    }
    int getAge()
    {
        return this->age;    
    }
    int getWeight()
    {
        return this->weight;
    }
    string getColor()
    {
        return this->color;
    }
};

int main()
{
    Dog Bruno;
    Bruno.bark();
    Bruno.breed(); 
    Dog Rottweiler;
    Rottweiler.breed();
    Bruno.setColor("Brown");
    Rottweiler.setAge(12);
    Rottweiler.getAge();
    cout<<Rottweiler.getAge();
    cout<<endl;
    Bruno.setWeight(24);
    cout<<Bruno.getColor();
    return 0;
}