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
	cout << "������� �������(�� ����� 9 ����): " << endl;
	cin >> tNumber;
	cout << "������� ������: " << endl;
	cin >> tSize;
	cout << "������� ����������: " << endl;
	cin >> tSklad;
	cout << "������� ����: " << endl;
	cin >> tPrice;
	cin.ignore(80, '\n');
	Product* ptrProduct = new Product(tName, tType, tMaterial, tSize, tNumber, tPrice, tSklad); // ������� ���������
	ptrProductList->add(ptrProduct); // ������� � ������ ���������
}