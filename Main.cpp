#include <iostream>
#include <iomanip>
#include <ctime>
#include "Sq_Matrix.h"
using namespace std;
int main()
{
	Auto_ptr<Sq_Matrix>FirstMatrix(new Sq_Matrix(5));
	Auto_ptr<Sq_Matrix>SecondMatrix(new Sq_Matrix(5));
	cout << *FirstMatrix << endl;
	FirstMatrix->Transp_Mstrix();
	cout << *FirstMatrix << endl;
	cout << *(*FirstMatrix.getPtr() * 4) << endl;
	cout << *(*FirstMatrix.getPtr() + *SecondMatrix.getPtr()) << endl;
	exit(0);
}