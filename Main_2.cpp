#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <ctime>
#include "Sq_Matrix.h"
using namespace std;

void Menu_matrix(int &ex)
{
	int ch, x;
	system("cls");
	cout << "1. Транспонирование матрицы\n2. Умножение матрицы на число\n3. Сложение мматриц\n0. Выход\n\nВведите номер команды: ";
	cin >> ch;
	system("cls");

	switch (ch)
	{
	case 0: {ex = 1; } break;
	case 1: 
	{
		cout << "Введите число строк / столбцов в квадратной матрице: ";
		cin >> x;
		Sq_Matrix a(x);
		a.Transp_Mstrix();
		_getch(); 
	}	break;
	case 2: 
	{
		cout << "Введите число строк / столбцов в квадратной матрице: ";
		cin >> x;
		Sq_Matrix a(x);
		a.Multipl_number();
		_getch(); 
	}	break;
	case 3: 
	{
		cout << "Введите число строк / столбцов в квадратной матрице: ";
		cin >> x;
		Sq_Matrix a(x);
		a.Matrix_add();
		_getch(); 
	}	break;
	default:
	{	
		cout << "Несуществующий пункт. Для продолжения нажмите любую клавишу.";
		_getch();
		Menu_matrix(ex); 
	}	break;
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int ex = 0;
	while (ex == 0)  Menu_matrix(ex);
	return 0;
}