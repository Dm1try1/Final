#include "Product.h"

class ProductList
{
private:
	// установить указатели на украшение
	list <Product*> setPtrsProd;
	list <Product*>::iterator iter; //итератор
public:
	~ProductList(); // деструктор (удаление украшений)
	void add(Product*); // добавить украшение в список
	int getAptNo(string); // возвращает кол-во на складе
	void display(); // вывод списка украшений
};