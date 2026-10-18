#include <iostream>
using namespace std;

namespace Myspace
{
    class Employee
    {
        public :
            int id;
            
            string name;
    };
};

class Employee
{
    public:
    
        int id;
        string name;
};

int main()
{
    Employee emp1;
    
    Myspace :: Employee emp2;
    
    emp1.name = "Tingu" ;
    
    emp2.name = "Pingu" ;
    
    cout << emp1.name << endl;
    
    cout << emp2.name << endl;
    
    return 0;
}
