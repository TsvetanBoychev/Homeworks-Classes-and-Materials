/* Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.*/

/*Write a program that calculates for given N how many trailing zeros
present at the end of the number N!. Examples N = 10, N! = 3628800,
answer 2; N! = 2432902008176640000, answer: 4. Make sure your program works for N up to 50 000*/

#include<iostream>
using namespace std;

int factorial(int n);
int findTrailingZeros(int  n);



int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n)<<endl;
    cout << "Count of trailing 0s in " << n<< "! is " << findTrailingZeros(n);

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int findTrailingZeros(int  n)
{
    // Initialize result
    int count = 0;

    // Keep dividing n by powers of 5 and update count
    for (int i=5; n/i>=1; i *= 5)
          count += n/i;

    return count;
}


