#include "stdafx.h"
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите ваше имя на английском языке: ";
	string p;
	cin >> p;
	cout << "Добрый день, " << p << endl;
	system("pause");
    return 0;
}