/*Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.*/

/*Write a function that reverses the digits of given positive decimal number. Example: 256 - 652.
Write a bool function that tests the function from task 8
with different values. It should call the function from 8 for a value
and check the result against the expected answer. Make the function check at least 10
numbers of different length and return true if all were correct or false if any of
them was wrong. Call that this checking function from main() and print it’s result
*/

#include<iostream>
using namespace std;


const int size_arr = 15;
int num, reverse_number;
int MyArr1[size_arr] = { 15,69,789,9877,15214,853,325,85744,963,87754,11,12,8563,14,39 };
int MyArr2[size_arr] = { 51,96,987,7789,41251,358,523,44758,369,45778,11,21,3658,41,93 };
int MyArr3[size_arr];
int reverse_function(int num);
bool Check(MyArr2, MyArr3, size_arr);


int main()
{


	cout << "Enter a number: ";
	cin >> num;

	reverse_number = reverse_function(num);

	cout << "After reverse the number is: " << reverse_number;

	cout<<"=============================================================================";

	for ( int i = 0; i<size_arr; i++)
	{

		MyArr3[i] = reverse_function(MyArr1[i]);


	}
//not finished yet

	return 0;
}
int sum = 0, rem;
int reverse_function(int num)
{
	if (num)
	{
		rem = num % 10;
		sum = sum * 10 + rem;
		reverse_function(num / 10);
	}
	else
		return sum;
	return sum;
}

bool Check(MyArr2, MyArr3, size_arr)
{
    for{int i=0;i<size_arr;i++}
    {
        if(MyArr2[i] == MyArr3[i])
            return true;
        else return false;
    }
}

