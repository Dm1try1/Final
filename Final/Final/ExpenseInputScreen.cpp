#include "ExpenseInputScreen.h"
#include <iostream>


using namespace std;
//////////////методы класса ExpenseInputScreen/////////////
void getaLine(string& inStr); // получение строки текста
char getaChar();
// конструктор
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseRecord(per)
{
	/*пусто*/
}
//------------------------------------------------------
void ExpenseInputScreen::setExpense()
{

	int month, day;
	string category, payee;
	float amount;
	cout << "¬ведите мес€ц (1-12): ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "¬ведите день (1-31): ";
	cin >> day;
	cin.ignore(80, '\n');

	cout << "¬ведите получател€ платежа (ќќќ '–ос осм—трой'): ";
	getaLine(payee);
	cout << "¬ведите сумму (14500(целое число)): ";
	cin >> amount;
	cin.ignore(80, '\n');
	// создаем новый расход
	Expense* ptrExpense = new Expense(month, day, payee, amount);
	// вставл€ем расход в список всех расходов
	ptrExpenseRecord->insertExp(ptrExpense);
}