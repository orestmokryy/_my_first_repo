#include "Vector.h"

void input_matrix(Vector A[n])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Input matrix[" << i + 1 << "][" << j + 1 << "]"<<endl;
			cin >> A[i].V[j];
		}
	}
}

void output_matrix(Vector A[n])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i].V[j] << "\t";
		}
		cout << endl;
	}
}

void mergeSort(int& inputed_arr, int length)
{
	{
		int* arr = &inputed_arr;
		if (length < 2)
		{
			return;
		}

		int* a = new int[length / 2];
		int* b = new int[length - length / 2];

		for (int k = 0; k < length / 2; k++)
		{
			a[k] = arr[k];
		}
		for (int h = 0; h < length - length / 2; h++)
		{
			b[h] = arr[length / 2 + h];
		}
		mergeSort(*a, length / 2);
		mergeSort(*b, length - length / 2);

		int left = 0, right = 0;
		for (int i = 0; i < length; i++) {
			if (left >= length / 2) {
				arr[i] = b[right];
				right++;
				continue;
			}
			if (right >= length - length / 2) {
				arr[i] = a[left];
				left++;
				continue;
			}
			if (a[left] > b[right])
			{
				arr[i] = a[left];
				left++;
			}
			else {
				arr[i] = b[right];
				right++;
			}
		}

		delete[] a;
		delete[] b;
	}
}

	void Sortmatrix_str(Vector A[n])
	{
		for (int i = 0; i < n; i++) {
			int str[n] = { 0 };
			for (int h = 0; h < n; h++) {
				str[h] = A[i].V[h];
			}
			mergeSort(*str, n);
			for (int h = 0; h < n; h++) {
				A[i].V[h] = str[h];
			}
		}
	}



	void find_f(Vector A[n], float temp_mas[n])
	{
		for (int i = 0; i < n; i++)
		{
			int sum = 0;
			float f_n = 0;
			float f = 0;
			for (int j = 0; j < n - i - 1; j++)
			{
				sum += A[j].V[i];
				f_n++;
			}
			f = (f_n != 0 ? (float)sum / f_n : 0);
			temp_mas[i] = f;
			printf("Stovp %d = %f\n", i, f);
		}
	}


 


