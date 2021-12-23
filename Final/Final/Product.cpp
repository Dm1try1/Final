#include <iostream>
#include "Product.h"

void getaLine(string& inStr) // получение строки текста
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); //число пропускаемых символов и символ разделения
	inStr = temp;
}
//---------------------------------------------------------
char getaChar() // получение символа
{
	char ch = cin.get();
	cin.ignore(80, '\n'); //число пропускаемых символов и символ разделения
	return ch;
}
//---------------------------------------------------------
////////////////методы класса Product///////////////////////
//в конструкторе задаём параметры украшений
Product::Product(string n, string n1, string n2, double aNo1, int aNo, double aNo2, int aNo3) : name(n), type(n1), material(n2), size(aNo1), number(aNo), price(aNo2), sklad(aNo3)
{
	/* тут пусто */
}
//---------------------------------------------------------
Product::~Product() // деструктор
{
	/* тут тоже пусто */
}
//---------------------------------------------------------
int Product::getAptNumber() //геттер возвращает артикул
{
	return number;
}
void Product::resklader(int CORVOL) //функция уменьшения кол-ва на складе
{
	sklad = sklad - CORVOL;
}
int Product::getSklad() //геттер возвращает колличество на складе
{
	return sklad;
}
double Product::getAptSize() //геттер возвращает нразмер
{
	return size;
}
double Product::getAptPrice() //геттер возвращает цену
{
	return price;
}
//--------------------------------------------------------
string Product::getName() //геттер возвращает название
{
	return name;
}
string Product::getType() //геттер возвращает тип
{
	return type;
}
string Product::getMaterial() //геттер возвращает материал
{
	return material;
}


