/*
Output:
The ID is: 10 
*/
#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    private :
        int id;                 
        
    public:
    
        void set_id(int id)      //setter function
        {
            this -> id = id ;
        }
            
        int get_id(void)      //Getter function
        {
            return id;
        }
};

int main()
{
    Employee emp1;
    
    emp1.set_id(10);
    
    cout << "The ID is: "<<emp1.get_id()<<endl;
    
    return 0;
}
