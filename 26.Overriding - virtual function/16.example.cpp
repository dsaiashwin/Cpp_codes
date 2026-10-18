#include "016_example.h"

Mentor :: Mentor(int i , string name, string address, string sub_taught, string rank):EmertxeMember(i,n,a)
{
    this -> sub_taught = sub_taught;
    this -> rank = rank;
}

Candidate :: Candidate(int i , string name, string address, string course, string year):EmertxeMember(i,n,a)
{
    this -> course = course;
    this -> year = year;
}

void EmertxeMember :: display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    
}

void Mentor :: display_profile(void)                            //overriding the base class definition
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Subject Taught: " << sub_taught << endl;
    cout << "Rank: " << rank << endl;
    
}

void Candidate :: display_profile(void)                         //overriding the base class definition
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Course: " << course << endl;
    cout << "Year: " << year << endl;
    
}

