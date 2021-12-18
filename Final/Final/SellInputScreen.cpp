/////////////////методы класса SellInputScreen/////////////
#include "SellInputScreen.h"
void SellInputScreen::setPlata()
{
	int skaldsk;
	ptrProductList->display();
	cout << "¬ведите наименование товара: ";
	getaLine(SalatName);
	// получить номер апартаментов по имени жильца
	Artikl = ptrProductList->getArtikl(SalatName);
	if (Artikl > 0) // если им€ найдено, и такой жилец существует -
	{
		cout << "¬ведите количество проданного: " << endl;
		cin >> tcolvo;
		cin.ignore(80, '\n');
		cout << "¬ведите номер мес€ца дл€ квартального отчЄта: " << endl;
		cin >> month;
		cin.ignore(80, '\n');
		month--; // (внутренн€€ нумераци€ 0-11)
		 // вставл€ем ренту в запись об оплате
		skaldsk = ptrProductList->getSkladsk(SalatName);
		if (skaldsk >= tcolvo)
		{
			moneypaid = ptrProductList->getPRICE(SalatName);
			moneypaid = tcolvo * moneypaid;
			ptrProductList->getSELLER(SalatName, tcolvo);
			ptrSell->insertRent(Artikl, month, moneypaid);
		}
		else
		{
			cout << "ќшибка, нельз€ столько продать.\n" << endl;
		}
	}

	else
		cout << "ќшибка, товар не существует.\n" << endl;
}
//---------------------------------------------------------