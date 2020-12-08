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
Sq_Matrix* operator+ (Sq_Matrix& Str)
{
	Sq_Matrix* Temp = new Sq_Matrix(this->x);
	for (int i = 0; i < Str.getX(); i++)
	{
		for (int j = 0; j < Str.getX(); j++)
		{
			Temp->matrix[i][j] = Str.matrix[i][j] + matrix[i][j];
		}
	}
	return Temp;
}
inline friend ostream& operator<< (ostream& Str, Sq_Matrix& v)
{
	Str << "matrix: ";
	int element = 0;

	for (int i = 0; i < v.getX(); i++)
	{
		Str.put('\n');
		for (int j = 0; j < v.getX(); j++)
		{
			element = v.getMatrix();
			Str.put(' ');
			Str << element;
		}
	}
	return Str;
}
Sq_Matrix* operator*(const int& Multiplier)
{
	Sq_Matrix* Temp = new Sq_Matrix(x);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			Temp->matrix[i][j] = this->matrix[i][j] * Multiplier;
		}
	}
	return Temp;
}
