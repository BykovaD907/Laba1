#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
using namespace std;
template<class T>
class Auto_ptr
{
	T* ptr;
public:
	Auto_ptr(T* inPtr)
		:ptr(inPtr)
	{

	}
	~Auto_ptr()
	{
		delete ptr;
	}
	T& operator*()const { return *ptr; }
	T* operator->()const { return ptr; }
	T* getPtr() { return ptr; }
};
class Sq_Matrix
{

	inline friend ostream& operator<< (ostream& Str, Sq_Matrix& v)
	{
		Str << "matrix: ";
		int element = 0;

		for (int i = 0; i < v.getX(); i++)
		{
			Str.put('\n');
			for (int j = 0; j < v.getX(); j++)
			{
				element = v.getMatrix()[i][j];
				Str.put(' ');
				Str << element;
			}
		}
		return Str;
	}

private:
	int x;// порядок матрицы (размерность)
	int** matrix;

public:
	Sq_Matrix(Sq_Matrix& o)
		:x(o.getX()), matrix(o.getMatrix())
	{

	};
	Sq_Matrix(int valueX = 3);
	virtual ~Sq_Matrix();
	inline int getX()
	{
		return x;
	}
	inline void setMatrix(int** inMatrix)
	{
		matrix = inMatrix;
	}
	inline int** getMatrix()
	{
		return matrix;
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
	void Transp_Mstrix();
};