#pragma once
#include <iostream>


class Matrix {
private:
	unsigned int rows, columns;
	double * matrix;
public:
	Matrix();                                               // конструктор без параметров
	Matrix(unsigned int, unsigned int);                     // конструктор с указанием размера
	Matrix(const double *, unsigned int, unsigned int);     // конструктор от массива с указанием размера
	Matrix(const Matrix &);                                 // конструктор копирования
	~Matrix();                                              // деструктор

	void SetSizes(unsigned int, unsigned int);              // метод установки размера
	bool ResetSizes(unsigned int, unsigned int);            // метод изменения размера
	void SetValue(unsigned int, unsigned int, double);		// метод изменения элемента
	unsigned int GetRows() const;							// метод получения колличество строк
	unsigned int GetColumns() const;						// метод получения колличество столбцов
	Matrix &  Transpose() const;                            // метод транспонирования

	Matrix & operator-();                                   // унарный оператор "-"
	Matrix & operator+(const Matrix &) const;               // бинарный оператор "+"
	Matrix & operator-(const Matrix &) const;               // бинарный оператор "-"
	Matrix & operator*(const Matrix &) const;               // бинарный оператор "*"
	Matrix & operator=(const Matrix &);						// бинарный оператор "="
	
	double & operator()(unsigned int, unsigned int);        // оператор доступа к элементу

	friend bool operator==(const Matrix &, const Matrix &);             // оператор сравнения
	friend std::ostream & operator<<(std::ostream &, const Matrix &);   // оператор вывода в поток
};
