/*
Output:
15
10
Hello
*/
#include <iostream>
using namespace std;
                                                //function overloading in to return two data types
int add (int n1 , int n2)
{
    return n1+n2;
}

double add ( double n1 , double n2)
{
    return n1+n2;
}
                                                //operator overloading by making an attempt to concatenate two strings because string is a class here in c++
string add ( string s1 , string s2)
{
    return s1+s2;
}

int main()
{
    cout << add ( 5, 10) << endl;
    
    cout << add ( 3.5, 6.5) << endl;
    
    cout << add ("Hell" , "o") << endl;
    
    return 0;
}
