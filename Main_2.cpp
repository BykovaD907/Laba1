#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <ctime>
#include "Sq_Matrix.h"
using namespace std;
int main()
{
	int x;
	cout << "enter the dimension of the matrix" << endl;
	cin >> x;
	Sq_Matrix a(x);
	a.Transp_Mstrix();
	a.Multipl_number();
	a.Matrix_add();
	exit(0);
}
