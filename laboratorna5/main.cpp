#include "Vector.h"
int main()
{
	float temp_mas[n];
	Vector Arr[n];
	input_matrix(Arr);
	Sortmatrix_str(Arr);
	cout << "\n Sorted matrix:" << endl;
	output_matrix(Arr);
	cout << endl;
	find_f(Arr, temp_mas);
	float F = 1;
	
	for (int i = 0; i < n; i++)
	{
		temp_mas[i] == 0 ? F *= 1 : F *= temp_mas[i];
	}
	cout <<"\n F = "<< F;
	
	return 0;
}

