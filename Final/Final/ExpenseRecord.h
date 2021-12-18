#pragma once
#include "Expense.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <Windows.h>

using namespace std;
class ExpenseRecord
{
private:
	vector<Expense*> vectPtrsExpenses; //������ ���������� �� �������
	vector<Expense*>::iterator iter;
public:
	~ExpenseRecord();
	void insertExp(Expense*);
	void display();
	float displaySummary(); // ����� ��� �������� ������
};