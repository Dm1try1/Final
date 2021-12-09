#include <iostream>
#include "ProductList.h"

////////////////методы класса ProductList///////////////////
ProductList::~ProductList() // деструктор
{
	while (!setPtrsProd.empty()) // удаление всех украшений,
	{ // удаление указателей из контейнера
		iter = setPtrsProd.begin();
		delete* iter;
		setPtrsProd.erase(iter);
	}
}
//---------------------------------------------------------
void ProductList::add(Product* ptrT)
{
	setPtrsProd.push_back(ptrT); // вставка нового украшения в список
}
//---------------------------------------------------------


void ProductList::display() // вывод списка украшений
{
	cout << setw(22) << left << "Название украшения"
		<< setw(8) << "Тип"
		<< setw(15) << "Материал"
		<< setw(15) << "Размер"
		<< setw(22) << "Кол-во на складе"
		<< setw(22) << "Цена"
		<< endl;
	if (setPtrsProd.empty()) { // если список украшений пуст
		cout << "***Нет украшений***\n" << endl; // выводим запись, что он пуст)
	}
	else
	{
		iter = setPtrsProd.begin();
		while (iter != setPtrsProd.end()) // распечатываем все украшения
		{
			cout << setw(22) << left << (*iter)->getName()
				<< setw(8) << (*iter)->getType()
				<< setw(15) << (*iter)->getMaterial()
				<< setw(15) << (*iter)->getAptSize()
				<< setw(22) << (*iter)->getAptNumber()
				<< setw(22) << (*iter)->getAptPrice()
				<< endl;
			*iter++;
		}
	}
}
