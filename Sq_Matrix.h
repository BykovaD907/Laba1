#ifndef Sq_Matrix_h
#define Sq_Matrix_h

class Sq_Matrix
{
private:
	int x;  // порядок матрицы (размерность)
	int** a = new int*[x];
	int** c = new int*[x];

public:
	Sq_Matrix(int valueX);
	~Sq_Matrix();


	void Transp_Mstrix();
	void Multipl_number();
	void Matrix_add();
	void PrintA();
	void PrintC();
};

#endif


