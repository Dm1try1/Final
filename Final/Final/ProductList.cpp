#include <iostream>
#include "ProductList.h"

////////////////������ ������ ProductList///////////////////
ProductList::~ProductList() // ����������
{
	while (!setPtrsProd.empty()) // �������� ���� ���������,
	{ // �������� ���������� �� ����������
		iter = setPtrsProd.begin();
		delete* iter;
		setPtrsProd.erase(iter);
	}
}
//---------------------------------------------------------
void ProductList::add(Product* ptrT)
{
	setPtrsProd.push_back(ptrT); // ������� ������ ��������� � ������
}
//---------------------------------------------------------
int ProductList::getArtikl(string tName) // �������� ������� ��������� �� ��������
{
	int Artikl;
	iter = setPtrsProd.begin();
	while (iter != setPtrsProd.end())
	{ //����� ��������� � ������
		Artikl = (*iter)->getNumber();
		if (tName == ((*iter)->getName())) // ���� ��������� �� ����� � ���������� ��� �������
		{
			return Artikl;
		}
		iter++;
	}
	return -1;
}
//--------------------------------------------------------
//---------------------------------------------------------
int ProductList::getSkladsk(string tName) // �������� ���-�� �� ������ �� �������� ���������
{
	int Skladsk;
	iter = setPtrsProd.begin();
	while (iter != setPtrsProd.end())
	{ //����� ��������� � ������
		Skladsk = (*iter)->getSklad();
		if (tName == ((*iter)->getName())) // ���� ��������� �� ����� � ���������� ��� ���-�� �� ������
		{
			return Skladsk;
		}
		iter++;
	}
	return -1; // ���� ��� - ���������� -1
}
//--------------------------------------------------------
//---------------------------------------------------------
int ProductList::getPRICE(string tName) // �������� ���� �� �������� ���������
{
	int PRICE;
	iter = setPtrsProd.begin();
	while (iter != setPtrsProd.end())
	{ //����� ��������� � ������
		PRICE = (*iter)->getPrice();
		if (tName == ((*iter)->getName())) // ���� ��������� �� ����� � ���������� ��� ����
		{
			return PRICE;
		}
		iter++;
	}
	return -1; // ���� ��� - ���������� -1
}
//--------------------------------------------------------
//---------------------------------------------------------
void ProductList::getSELLER(string tName, int tcolvo) // �������� ���-�� �� ������ ��� �������
{
	int itog;
	iter = setPtrsProd.begin();
	while (iter != setPtrsProd.end())
	{ //����� ��������� � ������
		itog = (*iter)->getPrice();
		if (tName == ((*iter)->getName())) // ������� ������ ��������� � ����� �������� ��������� ���-�� �� ������
		{ if ((*iter)->getSklad() >= tcolvo)
			{
			(*iter)->resklader(tcolvo);
			}
		}
		iter++;
	}
}
//--------------------------------------------------------
void ProductList::display() // ����� ������ ���������
{
	cout << setw(22) << left << "�������� ���������"
		<< setw(8) << "���"
		<< setw(15) << "��������"
		<< setw(15) << "������"
		<< setw(22) << "�������"
		<< setw(22) << "���-�� �� ������"
		<< setw(22) << "����"
		<< endl;
	if (setPtrsProd.empty()) { // ���� ������ ��������� ����
		cout << "***��� ���������***\n" << endl; // ������� ������, ��� �� ����)
	}
	else
	{
		iter = setPtrsProd.begin();
		while (iter != setPtrsProd.end()) // ������������� ��� ���������
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
