#include "Product.h"
#ifndef ProductList_h
#define ProductList_h

class ProductList
{
private:
	// ���������� ��������� �� ���������
	list <Product*> setPtrsProd;
	list <Product*>::iterator iter; //��������
public:
	~ProductList(); // ���������� (�������� ���������)
	void add(Product*); // �������� ��������� � ������
	int getPRICE(string); // ���������� ����
	void display(); // ����� ������ ���������
	int getArtikl(string); // ���������� �������
	void getSELLER(string, int);
	int getSkladsk(string);
};
#endif ProductList_h