/*
Output:
ID: 10 
*/
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    public :
    
        int id;
        char* name;
        
        Employee( int x , char* s);
        ~Employee(void);
};
Employee :: Employee( int x , char* s)
{
    id = x;
    name = (char*)malloc(sizeof(char)*10);
    strcpy(name,s);
}
Employee :: ~Employee(void)
{
    
    free(name);
}

int main()
{
    Employee e1(0, (char *)"Tingu");
    
    cout << "ID:" << e1.id << endl;
    //cout << "Name:" << e1.name << endl;

}
