#include "ExpenseRecord.h"
#include <iostream>

using namespace std;
ExpenseRecord::~ExpenseRecord() // ����������
{ // ������� ������� expense
// ������� ��������� �� ������
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete* iter;
		vectPtrsExpenses.erase(iter);
	}
}
//--------------------------------------------------------
void ExpenseRecord::insertExp(Expense* ptrExp)
{
	vectPtrsExpenses.push_back(ptrExp);
}
//---------------------------------------------------------
void ExpenseRecord::display() // ������������� ��� �������
{
	cout << setw(5) << left << "����"
		<< setw(10) << "�����"
		<< setw(25) << "����������"
		<< setw(15) << "�����"
		<< endl;
	if (vectPtrsExpenses.size() == 0) // � ���������� ��� ��������
		cout << "***�������� ���***\n" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{ // ������������� ��� �������

			cout << setw(5) << left << (*iter)->day
				<< setw(10) << (*iter)->month
				<< setw(25) << (*iter)->payee
				<< setw(15) << (*iter)->amount
				<< endl;
			iter++;
		}
		cout << endl;
	}
}
//--------------------------------------------------------
// ������������ ��� ����������� �������� ������
float ExpenseRecord::displaySummary()
{
	float totalExpenses = 0; // ����� �� ���� ���������� ��������
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "\t��� ���������\t0\n";
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{
		//������� �� ����� ��������� ��������
		cout << '\t' << '\t' << ((*iter)->amount) << endl;
		totalExpenses += (*iter)->amount; //������������ ��� �������
		iter++;
	}
	return totalExpenses;
}