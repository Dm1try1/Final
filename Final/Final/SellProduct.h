#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <numeric> //для accumulate()
using namespace std;
//класс, хранящий одну табличную строку доходов (суммы совершенных сделок)
// одна строка таблицы прибыли: адрес и 12 месячных оплат
class SellProduct
{
private:
	int Artikl; // артикул
	float Platim[12]; // месяцы
public:
	SellProduct(int); // конструктор с одним параметром
	void setPlatim(int, float); // добавить сумму сделки в нужном месяце

	float getSumOfRow();
	int getArtikl(); //запрос артикула
	float getPlatim(int); //Запрос суммы сделки за месяц
};