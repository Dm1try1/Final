#include <iostream>
#include "ProductInputScreen.h"

///////////����� ������ ProducttInputScreen//////////////////
void ProductInputScreen::setProduct() // �������� ������ �� ���������
{

	cout << "������� �������� ���������: " << endl;
	getaLine(tName);
	cout << "������� ���: " << endl;
	getaLine(tType);
	cout << "������� ��������: " << endl;
	getaLine(tMaterial);
	cout << "������� ������: " << endl;
	cin >> tSize;
	cout << "������� ����������: " << endl;
	cin >> tNumber;
	cout << "������� ����: " << endl;
	cin >> tPrice;
	cin.ignore(80, '\n');
	Product* ptrProduct = new Product(tName, tType, tMaterial, tSize, tNumber, tPrice); // ������� ���������
	ptrProductList->add(ptrProduct); // ������� � ������ ���������
}