#include<iostream>
using namespace std;
class Animals
{
   private:
   int height,weight;
   string color;
   
   public:
   Animals ()                                 //default constructor
   {
     this->height=0;
     this->weight=0;
     this->color="";
   }
   Animals(int h,int w,string c)            //parametrized constructor
   {
       this->height=h;
       this->weight=w;
       this->color=c;
   }
   void type()
   {
       cout<<"Animal Type!!"<<endl;
   }
};
int main()
{
    Animals Tiger(12,35,"Black"); 
    Animals Animal;
    Animal.type();
    return 0;
}