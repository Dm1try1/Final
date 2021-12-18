#include "ProductInputScreen.h"
#include "ExpenseInputScreen.h"
#include "SellInputScreen.h"
#include "ProductList.h"
#include "Sell.h"
#include "AnnualReport.h"
class UserInterface
{
private:
	ProductList* ptrProductList;
	ProductInputScreen* ptrProductInputScreen;
	Sell* ptrSell;
	SellInputScreen* ptrSellInputScreen;
	ExpenseRecord* ptrExpenseRecord;
	ExpenseInputScreen* ptrExpenseInputScreen;
	AnnualReport* ptrAnnualReport;
	char ch;
public:
	UserInterface();
	~UserInterface();
	void interact();
};