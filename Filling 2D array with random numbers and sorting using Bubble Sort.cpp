//Filling 2D array with random numbers and sorting using Bubble Sort
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void main()
{
	const int ROW = 20;
	const int COL = 30;
	int array[ROW][COL];
	srand(time(NULL));
	for (int i = 0; i < ROW; i++)
	{

		for (int j = 0; j < COL; j++)
		{
			array[i][j] = rand() % (50 - 100) + 50;
			cout << array[i][j] << "=>";
			cout << "array[" << i << "][" << j << "]: ";
			cout << array[i][j] << endl;
		}
		cout << "\n\n";
	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			for (int z = 0; z < (COL - j) - 1; z++)
			{
				if (array[i][z] > array[i][z + 1])
				{

					int swapvar = array[i][z + 1];
					array[i][z + 1] = array[i][z];
					array[i][z] = swapvar;
				}
			}
		}
	}
	for (int i = 0; i < ROW; i++)
	{

		for (int j = 0; j < COL; j++)
		{
			cout << array[i][j] << "=>";
			cout << "array[" << i << "][" << j << "]: ";
			cout << array[i][j] << endl;
		}
		cout << "\n\n";
	}
}