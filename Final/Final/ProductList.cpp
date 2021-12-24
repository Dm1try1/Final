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
int ProductList::getArtikl(string tName) // получить артикул украшения по названию
{
	int Artikl;
	iter = setPtrsProd.begin();
	while (iter != setPtrsProd.end())
	{ //поиск украшения в списке
		Artikl = (*iter)->getNumber();
		if (tName == ((*iter)->getName())) // ищем украшение по имени и возвращаем его артикул
		{
			return Artikl;
		}
		iter++;
	}
	return -1;
}
//--------------------------------------------------------
//---------------------------------------------------------
int ProductList::getSkladsk(string tName) // получить кол-во на складе по названию украшения
{
	int Skladsk;
	iter = setPtrsProd.begin();
	while (iter != setPtrsProd.end())
	{ //поиск украшения в списке
		Skladsk = (*iter)->getSklad();
		if (tName == ((*iter)->getName())) // ищем украшение по имени и возвращаем его кол-во на складе
		{
			return Skladsk;
		}
		iter++;
	}
	return -1; // если нет - возвращаем -1
}
//--------------------------------------------------------
//---------------------------------------------------------
int ProductList::getPRICE(string tName) // получить цену по названию украшения
{
	int PRICE;
	iter = setPtrsProd.begin();
	while (iter != setPtrsProd.end())
	{ //поиск украшения в списке
		PRICE = (*iter)->getPrice();
		if (tName == ((*iter)->getName())) // ищем украшение по имени и возвращаем его цену
		{
			return PRICE;
		}
		iter++;
	}
	return -1; // если нет - возвращаем -1
}
//--------------------------------------------------------
//---------------------------------------------------------
void ProductList::getSELLER(string tName, int tcolvo) // изменить кол-во на складе при продаже
{
	int itog;
	iter = setPtrsProd.begin();
	while (iter != setPtrsProd.end())
	{ //поиск украшения в списке
		itog = (*iter)->getPrice();
		if (tName == ((*iter)->getName())) // находим нужное украшение и после проверки уменьшаем кол-во на складе
		{ if ((*iter)->getSklad() >= tcolvo)
			{
			(*iter)->resklader(tcolvo);
			}
		}
		iter++;
	}
}
//--------------------------------------------------------
void ProductList::display() // вывод списка украшений
{
	cout << setw(22) << left << "Название украшения"
		<< setw(8) << "Тип"
		<< setw(15) << "Материал"
		<< setw(15) << "Размер"
		<< setw(22) << "Артикул"
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
				<< setw(15) << (*iter)->getSize()
				<< setw(22) << (*iter)->getNumber()
				<< setw(22) << (*iter)->getSklad()
				<< setw(22) << (*iter)->getPrice()
				<< endl;
			*iter++;
		}
	}
}
