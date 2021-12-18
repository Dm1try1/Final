#pragma once
#include "ExpenseRecord.h"
#include "Sell.h"
class AnnualReport
{
private:
	Sell* ptrRR; // записи доходов
	ExpenseRecord* ptrER; // записи расходов
	float expenses, Plats; // суммы доходов и расходов
public:
	AnnualReport(Sell*, ExpenseRecord*);
	void display(); // отображение годового отчета
};