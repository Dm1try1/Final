#include "AnnualReport.h"
////////////////������ ������ AnnualReport/////////////////
//�����������
AnnualReport::AnnualReport(Sell* pRR, ExpenseRecord* pER) : ptrRR(pRR), ptrER(pER)
{ /* ����� */
}
//---------------------------------------------------------
void AnnualReport::display()
{

	cout << "������� �����\n--------------\n" << endl;
	cout << "������\n" << endl;
	cout << "\t�������:\t\t";
	Plats = ptrRR->getSumOfPlatim();
	cout << Plats << endl;
	cout << "�������\n" << endl;
	expenses = ptrER->displaySummary();
	cout << "������� �����:\t\t";
	cout << expenses << endl;
	// ��������� ������������
	cout << "\n������:\t\t\t" << (Plats - expenses) << endl;
}