#include <iostream>
#include "UserInterface.h"

////////////////������ ������ userInterface//////////////
UserInterface::UserInterface()
{
	ptrProductList = new ProductList;
	ptrSell = new Sell;
	ptrExpenseRecord = new ExpenseRecord;
}
//---------------------------------------------------------
UserInterface::~UserInterface()
{
	delete ptrProductList;
	delete ptrSell;
	delete ptrExpenseRecord;
}
//---------------------------------------------------------
void UserInterface::interact()
{
	while (true)
	{

		cout << "��� ����� ������ ������� '1', \n"
			<< "��� ������ ������ '2', \n"
			<< "��� ������ '0': \n";
		ch = getaChar();
		if (ch == '1') // ���� ������
		{
			cout << "������� ��� ���������� ��������� '3', \n"
				<< "��� ��������� ������� � ���� '4', \n"
				<< "��� ������ �������� '5': \n";
			ch = getaChar();
			switch (ch)
			{
				//������ ����� ���������� ������ �� ����� ��
				//�������������
			case '3': ptrProductInputScreen =
				new ProductInputScreen(ptrProductList);
				ptrProductInputScreen->setProduct();
				delete ptrProductInputScreen;
				break;
			case '4': ptrSellInputScreen =
				new SellInputScreen(ptrProductList, ptrSell);
				ptrSellInputScreen->setPlata();
				delete ptrSellInputScreen;
				break;
			case '5': ptrExpenseInputScreen =
				new ExpenseInputScreen(ptrExpenseRecord);
				ptrExpenseInputScreen->setExpense();
				delete ptrExpenseInputScreen;
				break;
			default: cout << "����������� �������\n";
				break;
			} // ����� ������ switch
		} // ����� ������� if
		else if (ch == '2') // ����� ������
		{

			cout << "������� ��� ������ ��������� '3', \n"
				<< "��� ������ ������ ������ '4' \n"
				<< "��� ������ �������� '5', \n"
				<< "��� ������ �������� ������ '6': \n";
			ch = getaChar();
			switch (ch)
			{
			case '3': ptrProductList->display();
				break;
			case '4': ptrSell->display();
				break;
			case '5': ptrExpenseRecord->display();
				break;
			case '6':
				ptrAnnualReport = new AnnualReport(ptrSell,
					ptrExpenseRecord);
				ptrAnnualReport->display();
				delete ptrAnnualReport;
				break;
			default: cout << "����������� ������� ������\n";
				break;
			} // ����� switch
		} // ����� elseif
		else if (ch == '0')
			return; // �����
		else
			cout << "����������� �������. ��������� ������ '1', '2' ��� '0'\n";
	} // ����� while
}