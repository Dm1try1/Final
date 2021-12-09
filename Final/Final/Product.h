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
	int number;
	double price, size;
public:
	Product(string n, string n1, string n2, double aNo1, int aNo, double aNo2);
	~Product();
	int getAptNumber(); //возвращает кол-во на складе
	string getName();
	string getType();
	string getMaterial();
	double getAptPrice();
	double getAptSize();
};