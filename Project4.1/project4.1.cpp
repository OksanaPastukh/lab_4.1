// Lab_04_1.cpp
// < ������ ������ >
// ����������� ������ � 4.1
// ����� .
// ������ 14

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, N;
	double P;

	cout << "N = "; cin >> N;

	P = 1;
	i = N;

	while (i <= 10)
	{
		P *= ((double)i + (1 / (i * i)))/ (sqrt(1 + exp(1 / i)));
		i++;
	}
	cout << P << endl;

	P = 1;
	i = N;
	do {
		P *= ((double)i + (1 / (i * i))) / (sqrt(1 + exp(1 / i)));
		i++;
	} while (i <= 10);
	cout << P << endl;

	P = 1;
	for (i = N; i <= 10; i++)
	{
		P *= ((double)i + (1 / (i * i))) / (sqrt(1 + exp(1 / i)));
	}
	cout << P << endl;

	P = 1;
	for (i = 10; i >= N; i--)
	{
		P *= ((double)i + (1 / (i * i))) / (sqrt(1 + exp(1 / i)));
	}
	cout << P << endl;

	return 0;
}