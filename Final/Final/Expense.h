#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <numeric> //��� accumulate()
using namespace std;
class Expense
{
public:
	int month, day; // ����� � ���� ������ ��������
	string payee; // ���� ������ 
	float amount; // ������� ������
	Expense()
	{ }
	Expense(int m, int d, string p, float a) :
		month(m), day(d), payee(p), amount(a)
	{
		/* ��� �����! */
	}
};