#ifndef fun1_H
#define fun1_H

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
        EmertxeMember(int id , string name, string address)
        {
            this -> id = id;
            this -> name = name;
            this -> address = address;
        }
        void display_profile(void);
};

class Candidate : public EmertxeMember
{
    string course;
    int year;
    
    public:
        Candidate(int id , string name, string address, string course, int year);
        void display_profile(void);
};

class Mentor : public EmertxeMember
{
    string sub_taught;
    string rank;
    
    public:
        Mentor(int id , string name, string address, string sub_taught, string rank);
        void display_profile(void);
};
#endif
