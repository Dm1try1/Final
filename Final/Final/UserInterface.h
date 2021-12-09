#include "ProductInputScreen.h"

class UserInterface
{
private:
	ProductList* ptrProductList;
	ProductInputScreen* ptrProductInputScreen;
	char ch;
public:
	UserInterface();
	~UserInterface();
	void interact();
};