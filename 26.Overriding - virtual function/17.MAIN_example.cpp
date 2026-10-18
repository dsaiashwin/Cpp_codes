/*
Output:
m1:-->
ID: 200
Name: Tingu
Address: Mysore
m2:-->
ID: 300
Name: Pingu
Address: Bangalore
Course: ECEP
Year: 2019
*/
#include "016_example.h"

int main()
{
    EmertxeMember *m1 = new EmertxeMember(200, "Tingu", "Mysore");
    
    EmertxeMember *m2 = new EmertxeMember(300, "Pingu", "Banglore", "ECEP", "2019");
    
    cout << "m1:-->\n" << m1 -> display_profile();
    cout << "m2:-->\n" << m2 -> display_profile();
    
    return 0;
}
