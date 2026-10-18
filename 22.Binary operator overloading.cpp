/*
Output:
i: 21 i1:20                                                                     
i: 16 i1:31                                                                     
i: -5 i1:11 
*/
#include <iostream>
using namespace std;

class Binary
{
    int i;
    int i1;
    
    public:
        Binary( int f = 0 , int i = 0): i(f) , i1(i)
        {
            
        }
    void disp_dist()
    {
        cout << "i: " << i << " i1:" << i1 << endl;
    }
    
    void operator +( int a) //integral + overloading
    {
        i += a;
        i1 += a;
    }
    
    void operator +(Binary b) //Binary + overloading
    {
        i += b.i;
        i1 += b.i1;
    }
};

int main()
{
    Binary B1 (11, 10);
    Binary B2 (-5, 11);
    
    int a = 10;
    
    B1+a;
    
    B1.disp_dist();
    
    B1+B2;
    
    B1.disp_dist();
    B2.disp_dist();
    
    return 0;
    
}
