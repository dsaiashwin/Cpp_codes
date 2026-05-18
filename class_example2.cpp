#include <iostream>
using namespace std;

class cEmployee
{
    int id;
    string name;
    string address;
};

struct sEmployee
{
    int id;
    string name;
    string address;
};

int main()
{
    cEmployee emp1;
    sEmployee emp2;
    
    cout << "sizeof emp1 is " << sizeof(emp1) <<endl;
    cout << "sizeof emp2 is " << sizeof(emp2) <<endl;
}
