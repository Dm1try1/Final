#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <numeric> //для accumulate()
using namespace std;
class Expense
{
public:
	int month, day; // месяц и день уплаты расходов
	string payee; // кому платим 
	float amount; // сколько платим
	Expense()
	{ }
	Expense(int m, int d, string p, float a) :
		month(m), day(d), payee(p), amount(a)
	{
		/* тут пусто! */
	}
};