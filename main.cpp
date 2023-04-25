#include <iostream>
using namespace std;

void main()
{

	setlocale(LC_ALL, "rus");

	double res,i, var, summ=0; // announce variables
	for (i = 1; 1; i++)
	{
		cout << "Напишите " << i << "-ую оценку:";
		cin >> var; // setting variable on this iteration
		summ += var;
		if (var == 0) // condition to break a cycle
		{
			i--;
			break;
		}
		cout << endl;
	}
	res = summ / i; // calculating the average number

	cout << "Средняя оценка:" << res;

}