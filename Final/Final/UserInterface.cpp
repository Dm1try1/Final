#include <iostream>
#include "UserInterface.h"

////////////////методы класса userInterface//////////////
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

		cout << "Для ввода данных нажмите '1', \n"
			<< "Для вывода отчета '2', \n"
			<< "Для выхода '0': \n";
		ch = getaChar();
		if (ch == '1') // ввод данных
		{
			cout << "Нажмите для добавления украшения '3', \n"
				<< "Для занесения продажи в базу '4', \n"
				<< "Для записи расходов '5': \n";
			ch = getaChar();
			switch (ch)
			{
				//экраны ввода существуют только во время их
				//использования
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
			default: cout << "Неизвестная функция\n";
				break;
			} // конец секции switch
		} // конец условия if
		else if (ch == '2') // вывод данных
		{

			cout << "Нажмите для вывода украшений '3', \n"
				<< "Для вывода списка продаж '4' \n"
				<< "Для вывода расходов '5', \n"
				<< "Для вывода годового отчета '6': \n";
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
			default: cout << "Неизвестная функция вывода\n";
				break;
			} // конец switch
		} // конец elseif
		else if (ch == '0')
			return; // выход
		else
			cout << "Неизвестная функция. Нажимайте только '1', '2' или '0'\n";
	} // конец while
}