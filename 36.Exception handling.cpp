/*
Case 1:
Input:
Enter two values: 5 0                                                           
Output: 
Caught DIVIDE_BY_ZERO ERRORb: 0 
Case 2:
Input:
Enter two values: 3 -1                                                           
Output:
Res: -3
Case 3:
Input:
Enter two values: 8 6
Output:                                                      
Res: 1     
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter two values: " << endl;
    cin >> a >> b ;
    
    try
    {
        if ( b != 0)
        {
            cout << "Res: " << a/b <<endl;
        }
        
        else
        {
            throw b;
        }
    }
    
    catch(int x)
    {
        cout << "Caught DIVIDE_BY_ZERO ERRORb: "<< x << endl;
    }
    
}
