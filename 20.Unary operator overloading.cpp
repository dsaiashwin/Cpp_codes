/*
Output:
F: -11 I:-10                                                                    
F: 5 I:-11
*/
#include <iostream>
using namespace std;

class Distance
{
    
    private:
        int feet; 
        int inches;
        
    public:
        Distance( int f = 0 , int i = 0): feet(f), inches(i)
        {
            
        }
        
        void display_dist()
        {
            cout << "F: " << feet << " I:" << inches << endl;
        }
        
                                                                // Minus "-" operator overloading
        void operator - ()
        {
            feet   = -feet;
            inches = -inches;
        }
};

int main()
{
    Distance d1( 11, 10) ;
    Distance d2 ( -5, 11);
    
    -d1;                                                        //applying nagation to value d1
    d1.display_dist();
    
    -d2;                                                        //applying nagation to value d2
    d2.display_dist();
    
    return 0;
}
