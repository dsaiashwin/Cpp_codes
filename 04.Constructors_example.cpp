/*
The ID is: 10
The Name is: Tingu
*/
#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    public :
        int id;
        char * name;
        
        Employee( int x , char* y);
};

Employee::Employee (int x , char* y)
{
    id = x;
    name = (char*) malloc(sizeof(char)*10);
    strcpy(name,y);
}

int main()
{
    Employee e(0 , (char*) "Tingu");
    
    cout << "The ID is: " <<e.id << endl;
    cout << "The Name is: " <<e.name << endl;
}
