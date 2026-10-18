/*
Output:
4 40
*/
#include <iostream>
using namespace std;

class Rectangle
{
    protected :
        int width;
        int height;
        
    public :
        Rectangle( int a , int b)
        {
            width = a;
            height = b;
        }
        
        void display_value(void)
        {
            cout << width << " " << height << " " << endl;
        }
};

int main()
{
    Rectangle r = Rectangle( 4, 40 );
    r.display_value();
    return 0;
}
