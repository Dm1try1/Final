#include <iostream>
#include "ProductInputScreen.h"

///////////метод класса ProducttInputScreen//////////////////
void ProductInputScreen::setProduct() // добавить данные об украшении
{

	cout << "¬ведите название украшени€: " << endl;
	getaLine(tName);
	cout << "¬ведите тип: " << endl;
	getaLine(tType);
	cout << "¬ведите материал: " << endl;
	getaLine(tMaterial);
	cout << "¬ведите размер: " << endl;
	cin >> tSize;
	cout << "¬ведите количество: " << endl;
	cin >> tNumber;
	cout << "¬ведите цену: " << endl;
	cin >> tPrice;
	cin.ignore(80, '\n');
	Product* ptrProduct = new Product(tName, tType, tMaterial, tSize, tNumber, tPrice); // создать украшение
	ptrProductList->add(ptrProduct); // занести в список украшений
}