/*
Output:
i: 13 i1:12                                                                     
i: 15 i1:14                                                                     
i: -3 i1:13
*/
#include <iostream>
using namespace std;

class Unary
{
    private : 
        int i;
        int i1;
        
    public :
        Unary ( int f = 0, int i = 0) : i(f), i1(i)
        {
            
        }
        
        void disp_dist()
        {
            cout << "i: " << i << " i1:" << i1 <<endl;
        }
        
                                                            //overloading pre-increment operator(pre fix )
        void operator ++ ()
        {
            i += 2;
            i1 += 2;
        }
        
                                                            //overloading post increment operator (post fix)
        void operator ++ (int)
        {
            i += 2;
            i1 += 2;
        }
};

int main()
{
    Unary u1( 11, 10);
    Unary u2( -5, 11);
    
    ++u1; // pre-increment
    u1.disp_dist();
    
    u1++; //post increment
    u1.disp_dist();
    
    u2++;
    u2.disp_dist();
    
    return 0;
}
