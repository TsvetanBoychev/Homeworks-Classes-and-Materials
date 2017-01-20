#include<iostream>
#include<stdlib.h>// Запълване на двумерен масив със случайни числа
#include<time.h>// в този файл се съдържа функция time
using namespace std;


int main()
{
	int arrayA[50];

	srand(time(NULL));

	for (int i = 0; i<50; i++)
	{
		arrayA[i] = rand() % (50 - 100) + 50;
		cout << arrayA[i] << endl;
	}


	for (int i = 0; i<50; i++)
	{
		for (int j = 0; j < 49; j++)
		{

			if (arrayA[j]>arrayA[j + 1])

			{
				int swapvariable = arrayA[j];
				arrayA[j] = arrayA[j + 1];
				arrayA[j + 1] = swapvariable;

			}
		}


	}
	cout << "Sorted Array is: " << endl;
	for (int i = 0; i<50; i++)
	{
		cout << arrayA[i] << endl;
	}
}

