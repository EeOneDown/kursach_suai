#include <iostream>
#include <cmath>
#include "Matrix.h"


Matrix::Matrix() {
	rows = columns = 0;
	matrix = nullptr;
}

Matrix::Matrix(unsigned int N, unsigned  int M) {
	if (N && M) {
		rows = N;
		columns = M;
		matrix = new double[rows * columns];
		for (int i = 0; i < rows * columns; i++)
			matrix[i] = 0;
	}
	else {
		rows = columns = 0;
		matrix = nullptr;
	}
}


Matrix::Matrix(const double * arr, unsigned int N, unsigned int M) {
	if (N && M && arr) {
		rows = N;
		columns = M;
		matrix = new double[rows * columns];
		for (int i = 0; i < rows * columns; i++)
			matrix[i] = arr[i];
	}
	else {
		rows = columns = 0;
		matrix = nullptr;
	}
}

Matrix::Matrix(const Matrix & mt) {
	rows = mt.rows;
	columns = mt.columns;
	if (mt.matrix) {
		matrix = new double[rows * columns];
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < columns; j++)
				matrix[i * columns + j] = mt.matrix[i * columns + j];
	}
	else {
		matrix = nullptr;
	}
}

Matrix::~Matrix() {
	if (matrix)
		delete[] matrix;
}

void Matrix::SetSizes(unsigned int N, unsigned int M) {
	if (N && M && !matrix) {
		rows = N;
		columns = M;
		matrix = new double[rows * columns];
		for (int i = 0; i < rows * columns; i++)
			matrix[i] = 0;
		return;
	}
	else {
		std::cout << "ERROR in SetSizes: ";
		if (matrix)
			std::cout << "Matrix is not empty" << std::endl;
		else
			std::cout << "Wrong sizes" << std::endl;
		return;
	}
}

bool Matrix::ResetSizes(unsigned int N, unsigned int M) {
	if (rows * columns == N * M && matrix) {
		rows = N;
		columns = M;
		return true;
	}
	else {
		std::cout << "ERROR in ResetSizes: ";
		if (!matrix)
			std::cout << "Matrix is empty" << std::endl;
		else
			std::cout << "Wrong sizes" << std::endl;
		return false;
	}
}

unsigned int Matrix::GetRows() const {
	return this->rows;
};

unsigned int Matrix::GetColumns() const {
	return this->columns;
};

Matrix & Matrix::Transpose() const {
	auto * newMt = new Matrix(this->columns, this->rows);
	for (int i = 0; i < this->rows; i++)
		for (int j = 0; j < this->columns; j++)
			newMt->matrix[j * newMt->columns + i] = this->matrix[i * this->columns + j];
	return *newMt;
}

Matrix & Matrix::operator-() {
	for (int i = 0; i < rows * columns; i++)
		matrix[i] = matrix[i] > 0 ? -matrix[i] : fabs(matrix[i]);
	return *this;
}

Matrix & Matrix::operator+(const Matrix & mt) const {
	auto * newMt = new Matrix(*this);
	if (this->rows != mt.rows || this->columns != mt.columns)
		std::cout << "ERROR in operator+: Wrong sizes" << std::endl;
	else {
		for (int i = 0; i < newMt->rows; i++)
			for (int j = 0; j < newMt->columns; j++)
				newMt->matrix[i * columns + j] += mt.matrix[i * columns + j];
	}
	return *newMt;
};

Matrix & Matrix::operator-(const Matrix & mt) const {
	auto * newMt = new Matrix(*this);
	if (this->rows != mt.rows || this->columns != mt.columns)
		std::cout << "ERROR in operator-: Wrong sizes" << std::endl;
	else {
		for (int i = 0; i < newMt->rows; i++)
			for (int j = 0; j < newMt->columns; j++)
				newMt->matrix[i * columns + j] -= mt.matrix[i * columns + j];
	}
	return *newMt;
}

Matrix &Matrix::operator*(const Matrix & mt) const {
	auto * newMt = new Matrix(this->rows, mt.columns);
	if (this->matrix && mt.matrix && this->columns != mt.rows)
		std::cout << "ERROR in operator*: Wrong sizes" << std::endl;
	else {
		for (int i = 0; i < newMt->rows; i++)
			for (int j = 0; j < newMt->columns; j++) {
				double sum = 0;
				for (int r = 0; r < this->columns; r++)
					sum += this->matrix[i * this->columns + r] * mt.matrix[r * mt.columns + j];
				newMt->matrix[i * newMt->columns + j] = sum;
			}
	}
	return *newMt;
}

Matrix & Matrix::operator=(const Matrix & mt) {
	if (*this == mt)
		return *this;
	this->rows = mt.rows;
	this->columns = mt.columns;

	delete[] this->matrix;
	if (mt.matrix) {
		matrix = new double[rows * columns];
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < columns; j++)
				matrix[i * columns + j] = mt.matrix[i * columns + j];
	}
	else {
		matrix = nullptr;
	}
};

double & Matrix::operator()(unsigned int _row, unsigned int _col) {
	return matrix[_row * columns + _col];
}

bool operator==(const Matrix & mt1, const Matrix & mt2) {
	if (mt1.rows != mt2.rows || mt1.columns != mt2.columns)
		return false;
	for (int i = 0; i < mt1.rows * mt1.columns; i++)
		if (mt1.matrix[i] != mt2.matrix[i])
			return false;
	return true;
}

std::ostream & operator<<(std::ostream & os, const Matrix & mt) {
	os << "Sizes: " << mt.rows << "x" << mt.columns << std::endl;
	for (int i = 0; i < mt.rows; i++) {
		for (int j = 0; j < mt.columns; j++)
			std::cout << mt.matrix[i * mt.columns + j] << "\t";
		os << std::endl;
	}
	return os;
}
