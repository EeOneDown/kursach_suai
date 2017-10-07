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
		for (unsigned int i = 0; i < rows * columns; i++)
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
		for (unsigned int i = 0; i < rows * columns; i++)
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
		for (unsigned int i = 0; i < rows; i++)
			for (unsigned int j = 0; j < columns; j++)
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
		for (unsigned int i = 0; i < rows * columns; i++)
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

void Matrix::SetValue(unsigned int i, unsigned int j, double value) {
	matrix[i * columns + j] = value;
};

unsigned int Matrix::GetRows() const {
	return this->rows;
};

unsigned int Matrix::GetColumns() const {
	return this->columns;
};

double Matrix::GetDeterminant() const {
	if (!rows || !columns) {
		std::cout << "ERROR in GetDeterminant: matrix is empty" << std::endl;
		return 0;
	}
	else if (rows != columns) {
		std::cout << "ERROR in GetDeterminant: matrix must be square" << std::endl;
		return 0;
	}
	else if (rows == 1 && columns == 1)
		return matrix[0];
	else if (rows == 2 && columns == 2)
		return matrix[0] * matrix[3] - matrix[2] * matrix[1];
	else {
		int pusOrMinusOne = 1;
		double determinant = 0;
		for (unsigned int i = 0; i < columns; i++) {
			determinant += pusOrMinusOne * matrix[i] * this->GetMinor(0, i).GetDeterminant();
			pusOrMinusOne *= -1;
		}
		return determinant;
	}
}

Matrix Matrix::GetMinor(unsigned int _i, unsigned int _j) const {
	if (!rows || !columns) {
		std::cout << "ERROR in GetMinor: matrix is empty" << std::endl;
		return *new Matrix(*this);
	}
	else if (rows != columns) {
		std::cout << "ERROR in GetMinor: matrix must be square" << std::endl;
		return *new Matrix(*this);
	}
	else if (rows == 1 && columns == 1)
		return *new Matrix(*this);
	else {
		unsigned int newRows = rows - 1;
		unsigned int newColumns = columns - 1;
		Matrix newMatrix = Matrix(newRows, newColumns);
		unsigned int newMatrixIterator = 0;
		for (unsigned int i = 0; i < rows; i++) {
			if (i == _i)
				continue;
			for (unsigned int j = 0; j < columns; j++) {
				if (j == _j)
					continue;
				newMatrix.matrix[newMatrixIterator] = this->matrix[i * this->columns + j];
				newMatrixIterator += 1;
			}
		}
		return newMatrix;
	}
}

Matrix & Matrix::GetAdjugateMatrix() const {
	if (!rows || !columns) {
		std::cout << "ERROR in GetCofactorMatrix: matrix is empty" << std::endl;
		return *new Matrix(*this);
	}
	else if (rows != columns) {
		std::cout << "ERROR in GetCofactorMatrix: matrix must be square" << std::endl;
		return *new Matrix(*this);
	}
	else if (rows == 1 && columns == 1) {
		auto newMatrix = new Matrix(1, 1);
		(*newMatrix)(0, 0) = 1;
		return *newMatrix;
	}
	else {
		auto newMatrix = new Matrix(this->rows, this->columns);
		int pusOrMinusOne = 1;
		
		for (unsigned int i = 0; i < rows; i++) {
			for (unsigned int j = 0; j < columns; j++) {
				newMatrix->matrix[i * newMatrix->columns + j] = pusOrMinusOne * this->GetMinor(i, j).GetDeterminant();
				pusOrMinusOne *= -1;
			}
			if (!(columns % 2))
				pusOrMinusOne *= -1;
		}
		return newMatrix->Transpose();
	}
}

Matrix & Matrix::Transpose() const {
	auto * newMt = new Matrix(this->columns, this->rows);
	for (unsigned int i = 0; i < this->rows; i++)
		for (unsigned int j = 0; j < this->columns; j++)
			newMt->matrix[j * newMt->columns + i] = this->matrix[i * this->columns + j];
	return *newMt;
}

Matrix & Matrix::operator-() {
	for (unsigned int i = 0; i < rows * columns; i++)
		matrix[i] = matrix[i] > 0 ? -matrix[i] : fabs(matrix[i]);
	return *this;
}

Matrix & Matrix::operator+(const Matrix & mt) const {
	auto * newMt = new Matrix(*this);
	if (this->rows != mt.rows || this->columns != mt.columns)
		std::cout << "ERROR in operator+: Wrong sizes" << std::endl;
	else {
		for (unsigned int i = 0; i < newMt->rows; i++)
			for (unsigned int j = 0; j < newMt->columns; j++)
				newMt->matrix[i * columns + j] += mt.matrix[i * columns + j];
	}
	return *newMt;
};

Matrix & Matrix::operator-(const Matrix & mt) const {
	auto * newMt = new Matrix(*this);
	if (this->rows != mt.rows || this->columns != mt.columns)
		std::cout << "ERROR in operator-: Wrong sizes" << std::endl;
	else {
		for (unsigned int i = 0; i < newMt->rows; i++)
			for (unsigned int j = 0; j < newMt->columns; j++)
				newMt->matrix[i * columns + j] -= mt.matrix[i * columns + j];
	}
	return *newMt;
}

Matrix &Matrix::operator*(const Matrix & mt) const {
	auto * newMt = new Matrix(this->rows, mt.columns);
	if (this->matrix && mt.matrix && this->columns != mt.rows)
		std::cout << "ERROR in operator*: Wrong sizes" << std::endl;
	else {
		for (unsigned int i = 0; i < newMt->rows; i++)
			for (unsigned int j = 0; j < newMt->columns; j++) {
				double sum = 0;
				for (unsigned int r = 0; r < this->columns; r++)
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
		for (unsigned int i = 0; i < rows; i++)
			for (unsigned int j = 0; j < columns; j++)
				matrix[i * columns + j] = mt.matrix[i * columns + j];
	}
	else {
		matrix = nullptr;
	}
};

Matrix & Matrix::operator*(const double number) const {
	auto newMatrix = new Matrix(*this);
	for (unsigned int i = 0; i < rows * columns; i++)
		newMatrix->matrix[i] *= number;
	return *newMatrix;
}

Matrix & Matrix::operator/(const double number) const {
	auto * newMatrix = new Matrix(*this);
	if (!number)
		std::cout << "ERROR in operator/: Can't divide by zero" << std::endl;
	else {
		for (unsigned int i = 0; i < rows * columns; i++)
			newMatrix->matrix[i] /= number;
	}
	return *newMatrix;
}

double & Matrix::operator()(unsigned int _row, unsigned int _col) {
	return matrix[_row * columns + _col];
}

bool operator==(const Matrix & mt1, const Matrix & mt2) {
	if (mt1.rows != mt2.rows || mt1.columns != mt2.columns)
		return false;
	for (unsigned int i = 0; i < mt1.rows * mt1.columns; i++)
		if (mt1.matrix[i] != mt2.matrix[i])
			return false;
	return true;
}

std::ostream & operator<<(std::ostream & os, const Matrix & mt) {
	os << "Sizes: " << mt.rows << "x" << mt.columns << std::endl;
	for (unsigned int i = 0; i < mt.rows; i++) {
		for (unsigned int j = 0; j < mt.columns; j++)
			std::cout << mt.matrix[i * mt.columns + j] << "\t";
		os << std::endl;
	}
	return os;
}
