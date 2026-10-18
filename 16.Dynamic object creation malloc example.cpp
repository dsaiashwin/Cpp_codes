/*
Output:
0 0
*/
#include <iostream>
using namespace std;
class rect
{
    int width, height;
    public :
    rect( int a , int b)
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
    rect *r = (rect*)malloc(sizeof(rect));          //dynamically allocating memory
    r -> display_value();
    free(r);                                        //deallocating the dynamically allocated memory
    return 0;
}
