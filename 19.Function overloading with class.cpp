/*
Output:
The sum is = 18                                                                 
Multiplication is = 71.3906                                                     
The division is= 2
*/
#include <iostream>
using namespace std;

class Function_overloading                                          //function overloading with class
{   
    public:
    
    void calculation(int x, int y, int z)
    {
        cout << "The sum is = " << x+y+z << endl;
    }
    
    void calculation( double a, double b, double c)
    {
        cout << "Multiplication is = " << a*b*c <<endl;
    }
    
    int calculation(int f, int g)
    {
        return f/g;
    }
};
int main()
{
    Function_overloading obj1;
    
    obj1.calculation( 5, 6, 7 );
    
    obj1.calculation( 2.34, 4.54, 6.72 );
    
    cout << "The division is= " << obj1.calculation(10, 5) << endl;
}

