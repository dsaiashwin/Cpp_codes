/*
Output:
4 40
*/
#include <iostream>

using namespace std;

class polygon
{
    protected :
        int width,height;
        
    public :
        polygon( int a , int b)
        {
            width = a;
            height = b;
        }
        
        void display_value(void)
        {
            cout << width << " " << height << endl;
        }
};

int main()
{
    polygon *p = new polygon ( 4 , 40 );        //allocating memory dynamically
    
    p -> display_value();
    
    delete p;           //freeing up dynamic allocated memory
    
    return 0;
}
