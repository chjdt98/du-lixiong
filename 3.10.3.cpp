#include <iostream>
#include "Matrix.h"

using namespace std;

Matrix operator-(const Matrix &a, const Matrix &b)
{
    if(a.line != b.line || a.col != b.col)
    {
        cerr << "The row of the moment is not the same two numbers!" << endl;
        exit(EXIT_FAILURE);
    }

    Matrix c(a.line,a.col);
    for(int i = 0;i < a.line * a.col;i++)c.elems[i] = a.elems[i] - b.elems[i];return c;
}
