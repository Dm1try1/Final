#include "ProductList.h"

class ProductInputScreen
{
private:
	ProductList* ptrProductList;
	string tName;
	string tType;
	string tMaterial;
	double tPrice, tSize;
	int tNumber;
public:
	ProductInputScreen(ProductList* ptrTL) : ptrProductList(ptrTL)
	{
		/* тут пусто */
	}
	void setProduct(); // добавить данные о жильце
};

