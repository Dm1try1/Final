#pragma once
#include "Sell.h"
#include "ProductList.h"
#include "SellProduct.h"
using namespace std;

////////////////////класс SellInputScreen //////////////////
class SellInputScreen
{
private:
	ProductList* ptrProductList; // список товаров
	Sell* ptrSell; // список сделок
	string SalatName; // Ќазвание товара
	float moneypaid; // —умма сделки
	int month, tcolvo; // за мес€ц
	int Artikl; // артикул
public:
	SellInputScreen(ProductList* ptrTL, Sell* ptrRR) : ptrProductList(ptrTL),
		ptrSell(ptrRR)
	{
		/*тут пусто*/
	}
	void setPlata(); // добавить сумму сделки в нужном мес€це
};