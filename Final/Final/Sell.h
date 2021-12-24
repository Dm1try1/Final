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
//////////////////// ����� Sell ///////////////////////
//����� Sell. �� ������ ��������������� ������ �� ��������.
//� ��� ����� ����������������� ����� ���������� ������� ���������.
class Sell
{
private:
	list <SellProduct*> setPtrsRR; //
	list <SellProduct*>::iterator iter;
public:
	~Sell();
	void insertSell(int, int, float); // �������� ������
	void display(); // ������� ������ �� �������
	float getSumOfPlatim(); // ������� ����� ����� ������
};