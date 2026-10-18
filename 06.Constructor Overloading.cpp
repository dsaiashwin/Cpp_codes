/*
Output:
Constructor with zero args
Constructor with two args
0
200
*/
#include <iostream>
#include <cstring>

using namespace std;

class Construct
{
    public : 
        float area;
        
    //constructor with zero parameters
    Construct()
    {
        cout << "Constructor with zero args" <<endl;
        area = 0 ;
    }
    
    //Constructor with two parameters
    Construct( int a , int b)
    {
        cout << "Constructor with two args" << endl;
        area = a * b;
    }
    
    void display()
    {
        cout << area <<endl;
    }
};
int main()
{
    //constructor overloading done by passing zero and two arguments
    
    Construct o;
    Construct o2 (10 , 20);
    
    o.display();
    o2.display();
    return 1;
}
