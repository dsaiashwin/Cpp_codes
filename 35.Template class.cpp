/*
Output:
division: 5                                                                     
division: 5 
*/
#include <iostream>
using namespace std;

template <class T>
class MyTemplate
{
    T element;
    
    public :
        MyTemplate(T arg)
        {
            element = arg;
        }
        
        T divideby2()
        {
            return element/2;
        }
};

int main()
{
    MyTemplate <int>m(10);
    cout << "division: " <<m.divideby2() << endl;
    
    MyTemplate <int>m1(10.50f);
    cout << "division: " <<m.divideby2() << endl;
    return 0;
    
}
