#include "stdafx.h"
#include <iostream>
#include <locale>

using namespace std;

double vvodChisla()
{
	cout << "Введите число: ";
	double h;
	cin >> h;
	return h;
}

int matOperaci9()
{
	cout << "Выберите операцию (1 = +, 2 = -, 3 = *, 4 = /): ";
	int t;
	cin >> t;
	return t;
}

double calculateResult(double x, double t, double y)
{	

	if (t == 1) 
		return x + y; 
	if (t == 2) 
		return x - y; 
	if (t == 3)
		return x * y; 
	if (t == 4)
		return x / y; 

	return 0;
}

void printResult(double result)
{
	cout << "Ваш результат: " << result << std::endl;
}

int main()
{	
	setlocale(LC_ALL, "RUS");

	double x = vvodChisla();
	
	int t = matOperaci9();
	
	double y = vvodChisla();
	 
	double result = calculateResult(x, t, y);
	
	printResult(result);
	system("pause");
}