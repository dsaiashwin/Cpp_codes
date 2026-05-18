/*Case 1:
Input: 
Enter ID No: 101
Enter Name: Ajay
Enter Address: Bangalore
Output:
The ID is: 101
The Name is: Ajay
The Address is:  Bangalore
Case 2: 
Input:
Enter ID No: 11
Enter Name: Sagar
Enter Address: Mysore
Output: 
The ID is: 1
The Name is: Sagar
The Address is: Mysore*/
#include <iostream>
using namespace std;

class Employee
{
    private :
        int id;
        string name,add;
        
    public :
        
        void get_data(void)
        {
            cout << "Enter ID No: ";
            cin >> id;
            
            cout << "Enter Name: ";
            cin >> name;
            
            cout << "Enter Address: ";
            cin >> add;
        }
        
        void print_data(void)
        {
            cout << "The ID is: " <<id <<endl;
            cout << "The Name is: " << name <<endl;
            cout << "The Address is: " << add <<endl;
        }
};

int main()
{
    Employee emp1;
    
    emp1.get_data();
    emp1.print_data();
    
    return 0;
}
