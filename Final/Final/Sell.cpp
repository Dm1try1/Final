#include "Sell.h"
#include <iostream>
using namespace std;
/////////////////методы класса Sell//////////////////
Sell::~Sell() // деструктор
{ // удалить строки с платежами,
// удалить указатели из множества.
	while (!setPtrsRR.empty())
	{
		iter = setPtrsRR.begin();
		delete* iter;
		setPtrsRR.erase(iter);
	}
}
//---------------------------------------------------------
void Sell::insertRent(int Artikl, int month, float amount)
{
	iter = setPtrsRR.begin(); // Инициализация итератора
	while (iter != setPtrsRR.end()) // условие выхода
	{ // если текущий объект совпадает с созданным для поиска,
		if (Artikl == (*iter)->getArtikl())
		{ // заносим ренту в список
			(*iter)->setPlatim(month, amount);
			return;
		}
		else
			iter++;
	} // если не нашли строку - создаем новую
	SellProduct* ptrRow = new SellProduct(Artikl);
	ptrRow->setPlatim(month, amount); // заносим в нее платеж
	setPtrsRR.push_back(ptrRow); // заносим строку в вектор
}
//---------------------------------------------------------
void Sell::display() // отобразить все строки 
{
	cout << setw(22) << left << "Артикул"
		<< setw(8) << "Янв"
		<< setw(8) << "Фев"
		<< setw(8) << "Мар"
		<< setw(8) << "Апр"
		<< setw(8) << "Май"
		<< setw(8) << "Июн"
		<< setw(8) << "Июл"
		<< setw(8) << "Авг"
		<< setw(8) << "Сен"
		<< setw(8) << "Окт"
		<< setw(8) << "Ноя"
		<< setw(8) << "Дек"
		<< endl;
	if (setPtrsRR.empty())
		cout << "***Нет платежей!***\n" << endl;
	else
	{
		iter = setPtrsRR.begin(); //итератор на список с указателями на объекты SellProduct
		while (iter != setPtrsRR.end())
		{
			cout << setw(22) << (*iter)->getArtikl() << '\t'; // вывести артикул продукта
			for (int j = 0; j < 12; j++) // вывести 12 месяцев и продажи в них
			{
				if (((*iter)->getPlatim(j)) == 0)
					cout << setw(8) << " 0 ";
				else
					cout << setw(8) << (*iter)->getPlatim(j) << " ";
			}
			cout << endl;
			iter++;
		}
		cout << endl;
		cout << endl;
	}
}
//---------------------------------------------------------
float Sell::getSumOfPlatim() // сумма всех сделок
{
	float sumRents = 0.0;
	iter = setPtrsRR.begin();
	while (iter != setPtrsRR.end())
	{ // плюсуем суммы всех сделок
		sumRents += (*iter)->getSumOfRow();
		iter++;
	}
	return sumRents;
}