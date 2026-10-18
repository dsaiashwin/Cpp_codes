#ifndef 016_example_H
#define 016_example_H

#include <iostream>
#include <cstring>
using namespace std;

class EmertxeMember
{
    protected:
        int id;
        string name;
        string address;
        
    public:
        EmertxeMember( int i , string n, string a)
        {
            id = i;
            name = n;
            address = a;
        }
        
        virtual void display_profile (void);
};

class Mentor: public EmertxeMember
{
    string sub_taught;
    string rank;
    
    public:
        Mentor (int i , string n, string a, string sub_taught ,string rank);
        
        void display_profile(void);
        
};

class Candidate: public EmertxeMember
{
    string course;
    string year;
    
    public:
        Candidate (int i , string n, string a, string course ,string year);
        
        void display_profile(void);
        
};
#endif
