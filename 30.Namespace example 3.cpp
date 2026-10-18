#include <iostream>
using namespace std;

namespace global
{
    int x = 10;
}

int main()
{
    double x = 10.5;
    
    cout << global::x << endl;
    
    return 0;
}
