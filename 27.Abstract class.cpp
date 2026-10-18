/*
Output:
The area of Rectangle is 20
The area of Triangle is 10
*/
#include <iostream>
using namespace std;
class polygon
{
    protected:
        int width;
        int height;
        string shape_name;
    public:
        polygon() {}
        
        polygon( int a, int b, string name) : width(a),height(b),shape_name(name) {}
        
        string get_name(void)
        {
            return shape_name;
        }     
                                                               //pure virtual function
        virtual int get_area(void) = 0;
        
        void print_area(void)
        {
            cout << "The area of " << this -> get_name() << " is " << this -> get_area()  << endl;
        }
        
};

class Rectangle : public polygon
{
    public:
        Rectangle( int a, int b, string name) : polygon ( a, b , name) { }
        int get_area(void)
        {
            return width*height;
        }
};

class Triangle : public polygon
{
    public:
        Triangle( int a, int b, string name) : polygon ( a, b , name) { }
        int get_area(void)
        {
            return (width*height) / 2;
        }
};

int main()
{
    Rectangle rect( 4, 5 , "Rectangle");
    Triangle tri(4, 5, "Triangle");
    polygon *shapes[] = {&rect, &tri};
    for (int i = 0 ; i < 2 ; i++)
    {
        shapes[i] -> print_area();
    }
    return 0;
}
