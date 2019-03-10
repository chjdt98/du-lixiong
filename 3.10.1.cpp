#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>

using namespace std;

class Matrix;

Matrix operator+(const Matrix &a, const Matrix &b);
Matrix operator-(const Matrix &a, const Matrix &b);
Matrix operator*(const Matrix &a, const Matrix &b);

class Matrix
{

friend Matrix operator+(const Matrix &a, const Matrix &b);
friend Matrix operator-(const Matrix &a, const Matrix &b);
friend Matrix operator*(const Matrix &a, const Matrix &b);

public :
  Matrix(int l,int c);
  Matrix(const Matrix &m);
  ~Matrix();

  void setLine(int l);
  void setCol(int c);
  void setElems();

  int getLine() const;
  int getCol() const;
  void print() const ;

  Matrix& operator= (const Matrix &m);
  Matrix operator~ () const;

private :

  int line;
  int col;
  int *elems;
};

#endif
