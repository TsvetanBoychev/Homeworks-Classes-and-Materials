/*Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.*/

/*Write a function that reverses the digits of given positive decimal number. Example: 256 - 652*/

#include<iostream>
using namespace std;

int reverse_function(int num);
int main()
{
    int num,reverse_number;

    cout<<"Enter a number: ";
    cin>>num;

    reverse_number=reverse_function(num);
    cout<<"After reverse the number is: "<<reverse_number;
    return 0;
}
int sum=0,rem;
reverse_function(int num)
{
    if(num)
    {
        rem=num%10;
        sum=sum*10+rem;
        reverse_function(num/10);
    }
    else
        return sum;
    return sum;
}
