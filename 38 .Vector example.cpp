/*
Output: 
HELLO is equal to HELLO                                                         
HELLO WORLD!                                                                    
HELLO WORLD!                                                                    
HELLO WORLD! is not equal to HELLO
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> str = {"HELLO" ,"HELLO" ,"HELLO WORLD!", "HELLO"};
    
    try
    {
        if(str[0] == str[1])
        {
            cout << str[0] << " is equal to " << str[1] << endl;
        }
        
        else
        {
            throw string("Strings are not equal");
        }
        
        for (int i = 0 ; i < 2 ; i++)
        {
            cout << str[2] << endl;
        }
        
        if (str[2] == str[3])
        {
            cout << str[2] << " is equal to " << str[3] << endl;
        }
        
        else
        {
            throw string(str[2] + " is not equal to " + str[3]);
        }
    }
    catch (const string &e)
    {
        cout << e << endl;
    }
    return 0;
}
