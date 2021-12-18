#pragma once
#include "Sell.h"
#include "ProductList.h"
#include "SellProduct.h"
using namespace std;

////////////////////����� SellInputScreen //////////////////
//����� ��� ���������� ����� (�������� �� � �� �����)
class SellInputScreen
{
private:
	ProductList* ptrProductList; // ������ �������
	Sell* ptrSell; // ������ ������
	string SalatName; // �������� ������
	float moneypaid; // ����� ������
	int month, tcolvo; // �� �����
	int Artikl; // �������
public:
	SellInputScreen(ProductList* ptrTL, Sell* ptrRR) : ptrProductList(ptrTL),
		ptrSell(ptrRR)
	{
		/*��� �����*/
	}
	void setPlata(); // �������� ����� ������ � ������ ������
};