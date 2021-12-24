/////////////////������ ������ SellInputScreen/////////////
#include "SellInputScreen.h"
void SellInputScreen::setPlata()
{
	int skaldsk;
	ptrProductList->display();
	cout << "������� ������������ ������: ";
	getaLine(SalatName);
	// �������� �������� ������ �� ��������
	Artikl = ptrProductList->getArtikl(SalatName);
	if (Artikl > 0) // ���� ������� ������ � ����� ����� ���������� -
	{
		cout << "������� ���������� ����������: " << endl;
		cin >> tcolvo;
		cin.ignore(80, '\n');
		cout << "������� ����� ������ ��� ������������ ������: " << endl;
		cin >> month;
		cin.ignore(80, '\n');
		month--; // (���������� ��������� 0-11)
		skaldsk = ptrProductList->getSkladsk(SalatName);
		if (skaldsk >= tcolvo)
		{
			moneypaid = ptrProductList->getPRICE(SalatName);
			moneypaid = tcolvo * moneypaid;
			ptrProductList->getSELLER(SalatName, tcolvo);
			ptrSell->insertSell(Artikl, month, moneypaid);
		}
		else
		{
			cout << "������, ������ ������� �������.\n" << endl;
		}
	}

	else
		cout << "������, ����� �� ����������.\n" << endl;
}
//---------------------------------------------------------