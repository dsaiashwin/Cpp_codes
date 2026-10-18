#include "fun1.h"

Mentor :: Mentor(int id , string name , string address , string sub_taught, string rank):EmertxeMember(id , name, address)
{
    this -> sub_taught = sub_taught;
    this -> rank = rank;
}

Candidate :: Candidate(int id , string name , string address , string course, int year):EmertxeMember(id , name, address)
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

void Mentor :: display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Subject Taught: " << sub_taught << endl;
    cout << "Rank: " << rank << endl;  
}
void Candidate :: display_profile(void)
{
    cout << "ID :" << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Course: " << course << endl;
    cout << "Year: " << year << endl;  
}
