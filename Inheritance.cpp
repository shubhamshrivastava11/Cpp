#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int width, height;
    
    public:
    void setValue(int w, int h)
    {
        width=w;
        height=h;
    }
};
class Rectangle : public Polygon
{
   public:
   int area()
   {
       return width*height;
   }
};
class Traingle : public Polygon
{
    public:
    float area()
    {
        return (0.5)*width*height;
    }
};
int main()
{
    Rectangle Blue;
    Blue.setValue(5,7);
    cout<<Blue.area()<<endl;
    
    Traingle Yellow;
    Yellow.setValue(4,8);
    cout<<Yellow.area();
    
}