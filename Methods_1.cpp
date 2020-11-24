#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <ctime>
#include "Sq_Matrix.h"
using namespace std;


Sq_Matrix::Sq_Matrix(int valueX)
{
	x = valueX;
	for (int i = 0; i < x; i++) a[i] = new int[x];
	for (int i = 0; i < x; i++)
		for (int j = 0; j < x; j++)	a[i][j] = rand() % 10;
}

Sq_Matrix::~Sq_Matrix()
{
	for (int i = 0; i < x; i++)
	{
		delete[] a[i];
		delete[] c[i];
	}
}

void Sq_Matrix::Transp_Mstrix()
{
	for (int i = 0; i < x; i++)  c[i] = new int[x];
	for (int i = 0; i < x; i++)
		for (int j = 0; j < x; j++) c[i][j] = a[j][i];
	cout << "\n�������� �������:\n";
	PrintA();
	cout << "\n����������������� �������:\n";
	PrintC();
}

void Sq_Matrix::Multipl_number()
{
	int k;
	cout << "\n������� �����: ";
	cin >> k;
	for (int i = 0; i < x; i++)  c[i] = new int[x];
	for (int i = 0; i < x; i++)
		for (int j = 0; j < x; j++) c[i][j] = a[i][j] * k;
	cout << "\n�������� �������:\n";
	PrintA();
	cout << "\n�������, ���������� �� " << k << ":\n";
	PrintC();
}

void Sq_Matrix::Matrix_add()
{
	for (int i = 0; i < x; i++)  c[i] = new int[x];
	for (int i = 0; i < x; i++)
		for (int j = 0; j < x; j++) c[i][j] = rand() % 10;
	cout << "\n�������� �������:\n";
	PrintA();
	cout << endl;
	PrintC();
	cout << "\n����� ������:\n";
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)  cout << a[i][j] + c[i][j] << " ";
		cout << endl;
	}
}

void Sq_Matrix::PrintA()
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)  cout << a[i][j] << " ";
		cout << endl;
	}
}
void Sq_Matrix::PrintC()
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)  cout << c[i][j] << " ";
		cout << endl;
	}
}
