#pragma once
#include <iostream>
using namespace std;
const int n = 5;

class Vector
{
public:
	int V[n];
	friend void input_matrix( Vector A[n]);
	friend void output_matrix(Vector A[n]);
	friend void mergeSort(int& input_arr, int length);    
	friend void  Sortmatrix_str(Vector A[n]);
	friend void find_f(Vector A[n], float temp_mas[n]);
};
