/*
Output:
ID: 11
Name: Tingu
*/
#include <iostream>

using namespace std;

class Emertxe
{

        virtual void print() = 0 ; //Pure Virtual Function 
        
        // as the class containing pure virtual function it is called Abstract class
};
class Student :public Emertxe
{

    public :
        string id,name;
        Student( string i = "None", string n = "None" ):id(i),name(n){};
        void print()
        {
            cout << "ID: "<<id <<endl;
            cout<< "Name: "<<name <<endl;
        }
};

int main()
{
    Student obj("11","Tingu");  
    obj.print();
    return 0;
}
