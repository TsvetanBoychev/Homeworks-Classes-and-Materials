/* Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.*/

/*Write a program that shows the sign (+ or -) of the product of three
 real numbers without calculating it. Use a sequence of if statements.*/

#include <iostream>

using namespace std;

int main()
{
        int a;
        cin>>a;
        int b;
        cin>>b;
        int c;
        cin>>c;

        int counter = 0;

        if ((a == 0) | (b == 0) | (c == 0))
        {
           cout<<"The product of numbers " <<a<<" "<<b<<" "<<"and "<<c<<" "<<"is zero";

        }
        else
        {
            if (a < 0)
            {
                counter++;
            }
            if (b < 0)
            {
                counter++;
            }
            if (c < 0)
            {
                counter++;
            }
            if (counter == 1 | counter == 3)
            {
                cout<< "The product is negative"<<endl;
            }
            else
            {
                cout<< "The product is positive"<<endl;
            }
        }
    return 0;
}
