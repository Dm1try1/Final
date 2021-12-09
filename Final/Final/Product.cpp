#include <iostream>
#include "Product.h"

void getaLine(string& inStr) // ��������� ������ ������
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); //����� ������������ �������� � ������ ����������
	inStr = temp;
}
//---------------------------------------------------------
char getaChar() // ��������� �������
{
	char ch = cin.get();
	cin.ignore(80, '\n'); //����� ������������ �������� � ������ ����������
	return ch;
}
//---------------------------------------------------------
////////////////������ ������ Product///////////////////////
//� ������������ ����� ��������� ���������
Product::Product(string n, string n1, string n2, double aNo1, int aNo, double aNo2) : name(n), type(n1), material(n2), size(aNo1), number(aNo), price(aNo2)
{
	/* ��� ����� */
}
//---------------------------------------------------------
Product::~Product() // ����������
{
	/* ��� ���� ����� */
}
//---------------------------------------------------------
int Product::getAptNumber() //������ ���������� ���-�� �� ������
{
	return number;
}
double Product::getAptSize() //������ ���������� �������
{
	return size;
}
double Product::getAptPrice() //������ ���������� ����
{
	return price;
}
//--------------------------------------------------------
string Product::getName() //������ ���������� ��������
{
	return name;
}
string Product::getType() //������ ���������� ���
{
	return type;
}
string Product::getMaterial() //������ ���������� ��������
{
	return material;
}


