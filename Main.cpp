#include <iostream>
using namespace std;
int determinan = 0;
int j=0;
int f(int ** mat,int flag,int size)
{
	if (flag == size)
		return mat[flag][flag];
	if (flag > 0)
		j++;
	for (j;j < size;j++)
	{
		if (j == flag)
			continue;

		if ((j + 1) % 2 != 0)
			determinan += mat[flag+1][j] * f(mat, j, size);
		else
			determinan -= mat[flag+1][j] * f(mat, j, size);
	}
	return 0;
}

int main()
{
	//Get the size of matrix from user
	int size;
	cout << "Please enter the size : ";
	cin >> size;

	//Build the 2D matrix with the size
	//Using 2D dynamic array
	int i;
	int ** matrix = new int * [size];
	for (i = 0; i < size;i++)
		matrix[i] = new int[size];

	//Pushing the rand elements to the matrix
	for (i = 0; i < size;i++)
		for (j = 0;j < size;j++)
			matrix[i][j] = (i + 2)*(j + 1);

	//Using the function
	cout << f(matrix,-1,size);

	return 0;
}