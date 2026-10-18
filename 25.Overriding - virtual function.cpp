/*
Output:
Function of Child Class
*/
#include <iostream>
using namespace std;

class parent
{
    public:
        virtual void display()                                          //using Virtual Keyword
        {
            cout << "Function of Parent Class";
            
        }
};

class child : public parent
{
    public:
        void display()
        {
            cout << "Function of Child Class";
        }
};

int main()
{
    parent *obj1 = new  child();
    
    obj1 -> display();
    
    return 0;
}
