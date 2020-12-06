#include <iostream>
#include <iomanip>
#include <ctime>
#include "Sq_Matrix.h"
using namespace std;

Sq_Matrix::Sq_Matrix(int valueX)
{
	x = valueX;
	matrix = new int* [x];
	for (int i = 0; i < x; i++)
	{
		matrix[i] = new int[x];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			matrix[i][j] = i + 2;
		}
	}
}

Sq_Matrix::~Sq_Matrix()
{
	for (int i = 0; i < x; i++)
	{
		delete[] matrix[i];
	}
}

void Sq_Matrix::Transp_Mstrix()
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			matrix[i][j] = matrix[j][i];
		}
	}
}

