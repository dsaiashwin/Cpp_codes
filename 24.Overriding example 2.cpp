/*
Output:
Function of Parent Class
*/
#include <iostream>
using namespace std;

class parent 
{
    public:
        void display()
        {
            cout << "Function of Parent Class" <<endl;
        }
};

class child : public parent
{
    public:
        void display()
        {
            cout << "Function of Child Class" << endl;
        }
};

int main()
{
    parent *obj1 = new child();                             //taking pointer of type base class or parent class
    
    obj1 -> display();
    
    return 0;
}
