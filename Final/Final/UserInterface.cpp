#include <iostream>
#include "UserInterface.h"

////////////////������ ������ userInterface//////////////
UserInterface::UserInterface()
{
	ptrProductList = new ProductList;

}
//---------------------------------------------------------
UserInterface::~UserInterface()
{
	delete ptrProductList;

}
//---------------------------------------------------------
void UserInterface::interact()
{
	while (true)
	{

		cout << "��� ����� ������ ������� '1', \n"
			<< "��� ������ ������ '2', \n"
			<< "��� ������ '0': \n";
		ch = getaChar();
		if (ch == '1') // ���� ������
		{
			cout << "������� ��� ���������� ��������� '3', \n";
			ch = getaChar();
			switch (ch)
			{
				//������ ����� ���������� ������ �� ����� ��
				//�������������
			case '3': ptrProductInputScreen =
				new ProductInputScreen(ptrProductList);
				ptrProductInputScreen->setProduct();
				delete ptrProductInputScreen;
				break;
			default: cout << "����������� �������\n";
				break;
			} // ����� ������ switch
		} // ����� ������� if
		else if (ch == '2') // ����� ������
		{

			cout << "������� ��� ������ ��������� '3', \n";
			ch = getaChar();
			switch (ch)
			{
			case '3': ptrProductList->display();
				break;
			default: cout << "����������� ������� ������\n";
				break;
			} // ����� switch
		} // ����� elseif
		else if (ch == '0')
			return; // �����
		else
			cout << "����������� �������. ��������� ������ '1', '2' ��� '0'\n";
	} // ����� while
}