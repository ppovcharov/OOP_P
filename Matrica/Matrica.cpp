#include "Header.h"
#include <iostream>
Matrix::Matrix(int rows, int cols) {
	m_rows = rows;
	m_cols = cols;
	m_data = 0;
}
Matrix::~Matrix() {
	for (int i = 0; i < m_rows; i++)
	{
		delete[] m_data[i];
	}
	delete[] m_data;
}
Matrix::Matrix(const Matrix& other) {
	m_rows = other.m_rows;
	m_cols = other.m_cols;
	m_data = other.m_data;
}
Matrix& Matrix::operator=(const Matrix& other) {
	if (this != &other) {
		delete[] m_data;
		m_rows = other.m_rows;
		m_cols = other.m_rows;
		m_data = new int* [m_rows];
		for (int i = 0; i < m_rows; i++)
		{
			m_data[i] = new int[m_cols];
		}
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				m_data[i][j] = other.m_data[i][j];

			}
		}
	}
	return *this;
};
Matrix::Matrix(Matrix&& other) {
	m_rows = other.m_rows;
	m_cols = other.m_rows;
	m_data = new int* [m_rows];
	for (int i = 0; i < m_rows; i++)
	{
		m_data[i] = new int[m_cols];
	}
	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			m_data[i][j] = other.m_data[i][j];
		}
	}
};

Matrix& Matrix::operator=(Matrix&& other) {
	if (this != &other) {
		delete[] m_data;
		m_rows = other.m_rows;
		m_cols = other.m_cols;
		m_data = other.m_data;
	}
	return *this;
};
int& Matrix::operator()(int row, int col) {
	return m_data[row][col];
}
Matrix Matrix::operator+(const Matrix & other) const {
	try {
		if (m_rows != other.m_rows || m_cols != other.m_cols) {
			throw std::exception ("Rows and cols should be equal");
		}
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				m_data[i][j] += other.m_data[i][j];
			}
		}
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
Matrix Matrix::operator-(const Matrix & other) const {
	try {
		if (m_rows != other.m_rows || m_cols != other.m_cols) {
			throw std::exception("Rows and cols should be equal");
		}
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				m_data[i][j] += other.m_data[i][j];
			}
		}
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
void Matrix::copy(const Matrix& other) {
	try
	{
		if (m_rows != other.m_cols || m_cols != other.m_rows) {
			throw std::exception("Rows and cols must be equal");
		}
		m_rows = other.m_rows;
		m_cols = other.m_rows;
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				m_data[i][j] = other.m_data[i][j];
			}
		}
	}
	catch (const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}
	
}
Matrix transpose(const Matrix& matrix) {
	int** m = new int*[matrix.m_rows];
	for (int i = 0; i < matrix.m_rows; i++)
	{
		m[i] = new int[matrix.m_cols];
	}
	for (int i = 0; i < matrix.m_rows; i++)
	{
		for (int j = 0; j < matrix.m_cols; j++)
		{
			m[i][j] = matrix.m_data[j][i];
		}
	}
	for (int i = 0; i < matrix.m_rows; i++)
	{
		for (int j = 0; j < matrix.m_cols; j++)
		{
			matrix.m_data[i][j] = m[i][j];
		}
	}
	for (int i = 0; i < matrix.m_rows; i++)
	{
		delete[] m[i];
	}
	delete[] m;
}

Matrix Matrix::operator*(const Matrix& other) const {
	
};

int main() {

}
