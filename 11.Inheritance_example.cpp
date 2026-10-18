/*
Output:
0
10.05
10.05
*/
#include <iostream>
using namespace std;

class Base
{
    private:
        int id;
    
    protected:
        float f;
    
    public:
        Base()
        {
            id = 0 ;
            f = 10.05;
        }
        
        void display()
        {
            cout << id <<endl << f << endl;
        }
};

class child : public Base
{
    public :
        void ch()
        {
            cout << f <<endl;
        }
};

int main()
{
    Base b;
    b.display();
    
    child c;
    c.ch();
    
    return 0;
}
