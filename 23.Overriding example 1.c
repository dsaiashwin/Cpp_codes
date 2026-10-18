/*
Output:
Function of Child Class
*/
#include <iostream>
using namespace std;

class parent
{
    public :
        
        void display()
        {
            cout << "Function of Parent Class" << endl;
        }
};

class child : public parent
{
    public :
        void display()
        {
            cout << "Function of Child Class"  << endl;
        }
};

int main()
{
    child obj;
    
    obj.display();
    
    return 0;
}
