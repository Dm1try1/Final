#ifndef Product_h
#define Product_h
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <numeric> 
using namespace std;

void getaLine(string& inStr); // получение строки текста
char getaChar();

class Product
{
private:
	string name, type, material;
	int  number, sklad, CORVOL;
	double price, size;

public:
	Product(string n, string n1, string n2, double aNo1, int aNo, double aNo2, int aNo3);
	~Product();
	int getNumber(); //возвращает кол-во на складе
	string getName();
	string getType();
	int getSklad();
	void resklader(int);
	string getMaterial();
	double getPrice();
	double getSize();
};
#endif Product_h