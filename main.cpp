#include <iostream>
using namespace std;
void functA(int*, int*, int*, int);
void printArray(int*, int);
int main()
{
	int tam = 8;
	int listaA[8] = { 2,10,12,14,18,20,22,34 };
	int listaB[8] = { 1,3,5,13,21,35,51,53 };
	int* listaO = new int[tam * 2];
	functA(listaA, listaB, listaO, tam);
	printArray(listaO, tam * 2);
	return 0;
}
void functA(int* input1, int* input2, int* output, int tam)
{
	int* pivot1 = input1;
	int* pivot2 = input2;
	int* aux = output;

	for (; output < aux + tam * 2;)
	{
		if (*input1 < *input2 && input1 < pivot1 + tam)
		{
			*output = *input1;
			output++;

			input1++;

		}
		else
		{
			*output = *input2;
			output++;

			input2++;

		}
	}
}
void printArray(int* arr, int t)
{
	int* temp = arr;
	for (; arr < temp + t; arr++)
	{
		cout << *arr << ", ";
	}
}