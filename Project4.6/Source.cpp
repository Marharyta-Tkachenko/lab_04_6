#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double P, S;
	int j, i;

	S = 0;
	i = 1;
	while (i <= 20)
	{
		P = 1;
		j = 1;
		while (j <= i)
		{
			P *= i + j;
			j++;
		}
		S += P / ((i * i) + (P * P));
		i++;
	}
	cout << S << endl;

	S = 0;
	i = 1;
	do
	{
		P = 1;
		j = 1;
		do
		{
			P *= i + j;
			j++;
		} while (j <= i);
		S += P / ((i * i) + (P * P));
		i++;
	} while (i <= 20);
	cout << S << endl;

	S = 0;
	for (i = 1; i <= 20; i++)
	{
		P = 1;
		for (j = 1; j <= i; j++)
		{
			P *= i + j;
		}
		S += P / ((i * i) + (P * P));
	}
	cout << S << endl;

	S = 0;
	for (i = 20; i >= 1; i--)
	{
		P = 1;
		for (j = i; j >= 1; j--)
		{
			P *= i + j;
		}
		S += P / ((i * i) + (P * P));
	}
	cout << S << endl;

	return 0;
}