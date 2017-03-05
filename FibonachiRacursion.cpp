/* Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.*/

/*For this task, you are NOT allowed to use any type of loop.
 Write a function that calculates the Nth Fibonacci number.*/

#include <iostream>

using namespace std;




int fib(int n);
int main()
{
    int n, answer;
    cout << "Enter number to find: ";
    cin >> n;
    cout << "\n\n";
    answer = fib(n);

    cout << answer << " is the " << n << "th Fibonacci number\n";
    return 0;
}
int fib (int n)
{
    cout << "Processing fib(" << n << ")... ";
    if (n < 3 )
    {
        cout << "Return 1!\n";
        return (1);
    }
    else
    {
        cout << "Call fib(" << n-2 << ") and fib(" << n-1 << ").\n";
        return( fib(n-2) + fib(n-1));
    }
}
