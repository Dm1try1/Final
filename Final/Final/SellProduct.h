#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <numeric> //��� accumulate()
using namespace std;
class SellProduct
{
private:
	int Artikl; // �������
	float Platim[12]; // ������
public:
	SellProduct(int); // ����������� � ����� ����������
	void setPlatim(int, float); // �������� ����� ������ � ������ ������

	float getSumOfRow();
	int getArtikl(); //������ ��������
	float getPlatim(int); //������ ����� ������ �� �����
};