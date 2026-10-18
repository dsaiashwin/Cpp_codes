/*
Parent Constructor
8
Parent Constructor
Child Constructor
8
*/
#include <iostream>
using namespace std;

class Parent
{
    protected:
        int id;
    public:
        
        Parent()
        {
            cout << "Parent Constructor"<<endl;
            id = 8;
        }
        void display()
        {
            cout << id <<endl;
        }
};
class child:public Parent                       //inheriting Publicly
{
    public:
        child()
        {
            cout << "Child Constructor"<<endl;
        }
        void display()
        {
            cout << id << endl;
        }
};
int main()
{
    Parent p;
    p.display();
    
    child c;
    c.display();
    return 0;
}
