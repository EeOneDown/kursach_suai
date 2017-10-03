#pragma once
#include <iostream>


class Matrix {
private:
	unsigned int rows, columns;
	double * matrix;
public:
	Matrix();															// constructor without parameters
	Matrix(unsigned int, unsigned int);									// constructor from sizes
	Matrix(const double *, unsigned int, unsigned int);					// constructor from array with sizes
	Matrix(const Matrix &);												// copy constructor
	~Matrix();															// destructor

	void SetSizes(unsigned int, unsigned int);							// method to set sizes
	bool ResetSizes(unsigned int, unsigned int);						// method to reset sizes
	void SetValue(unsigned int, unsigned int, double);					// method to change value
	unsigned int GetRows() const;										// method to get count of rows
	unsigned int GetColumns() const;									// method to get count of columns
	double GetDeterminant() const;										// method to get determinant
	Matrix GetMinor(unsigned int, unsigned int) const;					// method to get minor
	Matrix & GetAdjugateMatrix() const;									// method to get adjugate matrix

	Matrix &  Transpose() const;										// method to transpose

	Matrix & operator-();												// unary operator "-"
	Matrix & operator+(const Matrix &) const;							// binary operator "+"
	Matrix & operator-(const Matrix &) const;							// binary operator "-"
	Matrix & operator*(const Matrix &) const;							// binary operator "*"
	Matrix & operator=(const Matrix &);									// binary operator "="

	Matrix & operator*(const double) const;								// binary operator "*" to double
	Matrix & operator/(const double) const;								// binary operator "/" to double
	
	double & operator()(unsigned int, unsigned int);					// access to matrix element

	friend bool operator==(const Matrix &, const Matrix &);             // comparison operator
	friend std::ostream & operator<<(std::ostream &, const Matrix &);   // output operator
};
