#include <iostream>
using namespace std;

namespace first
{
    int x = 10;
}
namespace second
{
    double x = 12.120;
}

int main()
{
    
    double x = 10.5;
    
    cout << x << endl;
    
    cout << first :: x << endl;
    
    cout << second :: x << endl;
    
    return 0;
}
