#include "Product.h"

class ProductList
{
private:
	// ���������� ��������� �� ���������
	list <Product*> setPtrsProd;
	list <Product*>::iterator iter; //��������
public:
	~ProductList(); // ���������� (�������� ���������)
	void add(Product*); // �������� ��������� � ������
	int getAptNo(string); // ���������� ���-�� �� ������
	void display(); // ����� ������ ���������
};