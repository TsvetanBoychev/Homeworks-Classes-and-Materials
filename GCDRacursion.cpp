/* Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.*/

/*Write a program that calculates the greatest common divisor (GCD)
 of given two numbers. Use the Euclidean algorithm (find it in Internet)*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
int gcd(int u, int v)
{
    return (v != 0) ? gcd(v, u % v) : u;
}

int main(void)
{
    int num1, num2, result;
    cout << "Enter two numbers to find GCD using Euclidean algorithm: ";
    cin >> num1 >> num2;
    result = gcd(num1, num2);
    if (gcd)
        cout << "\nThe GCD of " << num1 << " and " << num2 << " is: " << result
                << endl;
    else
        cout << "\nInvalid input!!!\n";
    return 0;
}
