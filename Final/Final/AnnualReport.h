#pragma once
#include "ExpenseRecord.h"
#include "Sell.h"
class AnnualReport
{
private:
	Sell* ptrRR; // ������ �������
	ExpenseRecord* ptrER; // ������ ��������
	float expenses, Plats; // ����� ������� � ��������
public:
	AnnualReport(Sell*, ExpenseRecord*);
	void display(); // ����������� �������� ������
};