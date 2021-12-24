#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <numeric> //дл€ accumulate()
using namespace std;
class SellProduct
{
private:
	int Artikl; // артикул
	float Platim[12]; // мес€цы
public:
	SellProduct(int); // конструктор с одним параметром
	void setPlatim(int, float); // добавить сумму сделки в нужном мес€це

	float getSumOfRow();
	int getArtikl(); //запрос артикула
	float getPlatim(int); //«апрос суммы сделки за мес€ц
};