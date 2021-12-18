#include "Sell.h"
#include <iostream>
using namespace std;
/////////////////������ ������ Sell//////////////////
Sell::~Sell() // ����������
{ // ������� ������ � ���������,
// ������� ��������� �� ���������.
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
	iter = setPtrsRR.begin(); // ������������� ���������
	while (iter != setPtrsRR.end()) // ������� ������
	{ // ���� ������� ������ ��������� � ��������� ��� ������,
		if (Artikl == (*iter)->getArtikl())
		{ // ������� ����� � ������
			(*iter)->setPlatim(month, amount);
			return;
		}
		else
			iter++;
	} // ���� �� ����� ������ - ������� �����
	SellProduct* ptrRow = new SellProduct(Artikl);
	ptrRow->setPlatim(month, amount); // ������� � ��� ������
	setPtrsRR.push_back(ptrRow); // ������� ������ � ������
}
//---------------------------------------------------------
void Sell::display() // ���������� ��� ������ 
{
	cout << setw(22) << left << "�������"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< setw(8) << "���"
		<< endl;
	if (setPtrsRR.empty())
		cout << "***��� ��������!***\n" << endl;
	else
	{
		iter = setPtrsRR.begin(); //�������� �� ������ � ����������� �� ������� SellProduct
		while (iter != setPtrsRR.end())
		{
			cout << setw(22) << (*iter)->getArtikl() << '\t'; // ������� ������� ��������
			for (int j = 0; j < 12; j++) // ������� 12 ������� � ������� � ���
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
float Sell::getSumOfPlatim() // ����� ���� ������
{
	float sumRents = 0.0;
	iter = setPtrsRR.begin();
	while (iter != setPtrsRR.end())
	{ // ������� ����� ���� ������
		sumRents += (*iter)->getSumOfRow();
		iter++;
	}
	return sumRents;
}