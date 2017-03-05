/* Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.*/

/*Write a program that enters the coefficients a, b and c of a quadratic equation a*x2 + b*x + c = 0
and calculates and prints its real roots. Note that quadratic equations may have 0, 1 or 2 real roots.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{



        double a;
        cin>>a;
        double b;
        cin>>b;
        double c;
        cin>>c;


        if (a == 0)
        {
            cout<<"This is not an quadratic equation!"<<endl;
        }
        else
        {
            double discriminant = (b*b) - (4 * a * c);

            cout<<"Discriminant is: "<<discriminant<<endl;

            if (discriminant > 0)
            {
                double x1 = (-b + sqrt(discriminant)) / (2 * a);
                double x2 = (-b - sqrt(discriminant)) / (2 * a);
                cout<<"The equation roots are: X1: "<<x1<<" and "<<"X2: "<<x2<<endl;

            }
            else if (discriminant == 0)
            {
                double x = -b / (2 * a);
                cout<<"The equaltion has only one root: "<<x;
            }
            else if (discriminant < 0)
            {
                cout<<"This equations doesn't have solution!"<<endl;
            }
    return 0;
}
}
