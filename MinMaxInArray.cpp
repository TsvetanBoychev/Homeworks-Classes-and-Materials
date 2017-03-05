/* Tsvetan Boychev Boychev,
SoftUni, Course C ++ Programming - february 2017, C++ homework, Lesson 1.*/

/*Write a program that reads from the console a sequence of N
integer numbers and returns the minimal and maximal of them.*/


#include<iostream>
using namespace std;


void MaXMin(double a[], int sz, double* max, double* min);

int main()
{
	const int size = 5;
	double ArrayCB[size];

	cout << "Enter the elements of the array" << endl;

	for(int i = 0; i<size; i++)
    {
        cin>>ArrayCB[i];
    }

    double d;
    double z;

    MaXMin(ArrayCB, size, &d, &z);


    cout << "Max = " << d << endl;
	cout << "Min = " << z << endl;


    return 0;
}

void MaXMin(double *ArrayCB, int size, double *max, double *min)

{
    *max = *ArrayCB;
    *min = *ArrayCB++;

    for (int i = 0; i <= size; i++,*ArrayCB++)
    {
        if (*max < *ArrayCB)
            *max = *ArrayCB;

        if (*min > *ArrayCB)
            *min = *ArrayCB;

    }
}


