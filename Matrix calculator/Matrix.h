#pragma once
#include <iostream>


class Matrix {
private:
	unsigned int rows, columns;
	double * matrix;
public:
	Matrix();                                               // ����������� ��� ����������
	Matrix(unsigned int, unsigned int);                     // ����������� � ��������� �������
	Matrix(const double *, unsigned int, unsigned int);     // ����������� �� ������� � ��������� �������
	Matrix(const Matrix &);                                 // ����������� �����������
	~Matrix();                                              // ����������

	void SetSizes(unsigned int, unsigned int);              // ����� ��������� �������
	bool ResetSizes(unsigned int, unsigned int);            // ����� ��������� �������
	void SetValue(unsigned int, unsigned int, double);		// ����� ��������� ��������
	unsigned int GetRows() const;							// ����� ��������� ����������� �����
	unsigned int GetColumns() const;						// ����� ��������� ����������� ��������
	Matrix &  Transpose() const;                            // ����� ����������������

	Matrix & operator-();                                   // ������� �������� "-"
	Matrix & operator+(const Matrix &) const;               // �������� �������� "+"
	Matrix & operator-(const Matrix &) const;               // �������� �������� "-"
	Matrix & operator*(const Matrix &) const;               // �������� �������� "*"
	Matrix & operator=(const Matrix &);						// �������� �������� "="
	
	double & operator()(unsigned int, unsigned int);        // �������� ������� � ��������

	friend bool operator==(const Matrix &, const Matrix &);             // �������� ���������
	friend std::ostream & operator<<(std::ostream &, const Matrix &);   // �������� ������ � �����
};
