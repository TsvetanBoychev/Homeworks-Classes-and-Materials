/* Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.

Write a conditional statement that examines two integer variables
and exchanges their values if the first one is greater than the second one.*/




#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Please enter an integer: ";
    cin>>a;
    cout<<"a before swapping: "<<a<<endl;
    int b;
    cout<<"Please enter second integer: ";
    cin>>b;
    cout<<"b before swapping: "<<b<<endl;
    cout<<"=================================="<<endl;

    int swap_variable;

    if(a>b)
    {
        swap_variable = a;
        a = b;
        b = swap_variable;

         cout<<"a after swapping: "<<a<<endl;
         cout<<"b after swapping: "<<b<<endl;

    }

    else
        cout<<"a is not greater than b"<<endl;
    return 0;
}
