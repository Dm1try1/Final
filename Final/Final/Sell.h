#pragma once
#include "SellProduct.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <numeric> 
using namespace std;
//////////////////// класс Sell ///////////////////////
//класс Sell. ќн хранит непосредственно записи об продажах.
//— ним будет взаимодействовать экран добавлени€ продажи украшений.
class Sell
{
private:
	list <SellProduct*> setPtrsRR; //
	list <SellProduct*>::iterator iter;
public:
	~Sell();
	void insertSell(int, int, float); // добавить сделку
	void display(); // вывести строки по сделкам
	float getSumOfPlatim(); // подсчЄт общей суммы сделок
};