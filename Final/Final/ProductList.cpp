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


void ProductList::display() // ����� ������ ���������
{
	cout << setw(22) << left << "�������� ���������"
		<< setw(8) << "���"
		<< setw(15) << "��������"
		<< setw(15) << "������"
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
				<< setw(15) << (*iter)->getAptSize()
				<< setw(22) << (*iter)->getAptNumber()
				<< setw(22) << (*iter)->getAptPrice()
				<< endl;
			*iter++;
		}
	}
}
