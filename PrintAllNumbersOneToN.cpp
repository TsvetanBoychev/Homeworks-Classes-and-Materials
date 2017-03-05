/* Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.*/

/*Write a program that prints all the numbers from 1 to N*/



#include <iostream>

using namespace std;

int main()
{
    int z;
    cout << "Please enter an integer: " ;
    cin>>z;

    for(int i=0; i<=z; i++)
    {
        cout<<i<< " ";
    }
    return 0;
}
