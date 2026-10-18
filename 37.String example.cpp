/*
Output: 
HELLO is equal to HELLO                                                         
HELLO WORLD!                                                                    
HELLO WORLD!                                                                    
HELLO WORLD! is not equal to HELLO
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s, s1;
    
    s= "HELLO";
    s1 = "HELLO";
    
    if( s.compare (s1) == 0)
    {
        cout << s << " is equal to " << s1 << endl;
    }
    else
    {
        cout << s << " is not equal to " << s1 << endl;
    }
    
    s.append(" WORLD!");
    cout << s << endl;
    printf("%s\n" , s.c_str());
    
    if(s.compare(s1) == 0)
    {
        cout << s << " is equal to " << s1 << endl;
    }
    
    else
    {
        cout << s << " is not equal to " << s1 << endl ;
    }
    return 0;
}
