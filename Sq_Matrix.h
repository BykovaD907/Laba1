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
		:ptr(inPtr) {}
	~Auto_ptr() { delete ptr; }
	T& operator*()const { return *ptr; }
	T* operator->()const { return ptr; }
	T* getPtr() { return ptr; }
};
class Sq_Matrix
{
public:
	Sq_Matrix(Sq_Matrix& o)
		:x(o.getX()), matrix(o.getMatrix())
	{};
	Sq_Matrix(const Sq_Matrix& source);
	Sq_Matrix(int valueX = 3);
	virtual ~Sq_Matrix();
	inline int getX() { return x; }
	inline void setMatrix(int* inMatrix)
	{
		source.matrix = inMatrix;
	}
	inline int* getMatrix() { return source.matrix; }
	void Transp_Mstrix();
	Sq_Matrix* operator*(const int& Multiplier);
	ostream& operator<< (ostream& Str, Sq_Matrix& v);
	Sq_Matrix* operator+ (Sq_Matrix& Str);

private:
	int x;// порядок матрицы (размерность)
	int** matrix;
};