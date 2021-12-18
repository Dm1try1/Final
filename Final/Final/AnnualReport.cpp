#include "AnnualReport.h"
////////////////методы класса AnnualReport/////////////////
//Конструктор
AnnualReport::AnnualReport(Sell* pRR, ExpenseRecord* pER) : ptrRR(pRR), ptrER(pER)
{ /* пусто */
}
//---------------------------------------------------------
void AnnualReport::display()
{

	cout << "Годовой отчет\n--------------\n" << endl;
	cout << "Доходы\n" << endl;
	cout << "\tПродажи:\t\t";
	Plats = ptrRR->getSumOfPlatim();
	cout << Plats << endl;
	cout << "Расходы\n" << endl;
	expenses = ptrER->displaySummary();
	cout << "Расходы всего:\t\t";
	cout << expenses << endl;
	// вычисляем прибыльность
	cout << "\nБаланс:\t\t\t" << (Plats - expenses) << endl;
}