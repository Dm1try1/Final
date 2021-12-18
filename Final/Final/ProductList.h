#include "Product.h"
#ifndef ProductList_h
#define ProductList_h

class ProductList
{
private:
	// установить указатели на украшение
	list <Product*> setPtrsProd;
	list <Product*>::iterator iter; //итератор
public:
	~ProductList(); // деструктор (удаление украшений)
	void add(Product*); // добавить украшение в список
	int getPRICE(string); // возвращает цену
	void display(); // вывод списка украшений
	int getArtikl(string); // возвращает артикул
	void getSELLER(string, int);
	int getSkladsk(string);
};
#endif ProductList_h