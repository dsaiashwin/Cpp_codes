/*
Output:
m1:--->                                                                         
ID: 100                                                                         
Name: Ringu                                                                     
Address: Mangalore                                                              
m2:--->                                                                         
ID: 108                                                                         
Name: Tingu                                                                     
Address: Mysore                                                                 
Subject Taught: Linux Systems                                                   
Rank: Senior                                                                    
c1:--->                                                                         
ID: 120                                                                         
Name: Pingu                                                                     
Address: Bangalore                                                              
Course: ECEP                                                                    
Year: 2019
*/
#include "fun1.h"

int main()
{
    EmertxeMember em1( 100 , "Ringu", "Mangalore");
    cout << "m1:--->\n";
    em1.display_profile();
    Mentor m1( 108 , "Tingu", "Mysore", "Linux Systems", "Senior");
    cout << "m2:--->\n";
    m1.display_profile();  
    Candidate c1( 120 , "Pingu", "Bangalore", "ECEP", 2019);
    
    cout << "c1:--->\n";
    c1.display_profile();    
    return 0;
}
