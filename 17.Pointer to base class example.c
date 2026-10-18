/*
Output:
20
10
*/
#include <iostream>
using namespace std;

class polygon 
{
    protected :
        int width,height;
    
    public :
        void set_values(int x, int y)
        {
            width = x;
            height = y;
        }
};

class rectangle : public polygon                            //publicly inheriting base class
{
    public :
    
        int area()
        {
            return width*height;
        }
};

class triangle : public polygon                             //publicly inheriting base class
{
    public :
    
        int area()
        {
            return (width*height)/2;
        }
};

int main()
{
    rectangle rect;
    triangle tri;
    
    polygon *p1 = &rect;                                    //creating pointer of type base class
    polygon *p2 = &tri;                                     //creating pointer of type base class
    
    p1 -> set_values(4, 5);
    p2 -> set_values(4, 5);
    
    cout << rect.area() << endl;
    cout << tri.area() << endl;
    
    return 0;
}
