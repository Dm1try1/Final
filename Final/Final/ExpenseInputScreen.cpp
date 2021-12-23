#include "ExpenseInputScreen.h"
#include <iostream>


using namespace std;
//////////////������ ������ ExpenseInputScreen/////////////
void getaLine(string& inStr); // ��������� ������ ������
char getaChar();
// �����������
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseRecord(per)
{
	/*�����*/
}
//------------------------------------------------------
void ExpenseInputScreen::setExpense()
{

	int month, day;
	string category, payee;
	float amount;
	cout << "������� ����� (1-12): ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "������� ���� (1-31): ";
	cin >> day;
	cin.ignore(80, '\n');

	cout << "������� ���������� ������� (��� '������������'): ";
	getaLine(payee);
	cout << "������� ����� (14500(����� �����)): ";
	cin >> amount;
	cin.ignore(80, '\n');
	// ������� ����� ������
	Expense* ptrExpense = new Expense(month, day, payee, amount);
	// ��������� ������ � ������ ���� ��������
	ptrExpenseRecord->insertExp(ptrExpense);
}